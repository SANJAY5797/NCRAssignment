using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace FlightBookingPortal1.Models
{
    public class BookTicket
    {
        public city fromCity { get; set; }
        public city toCity { get; set; }
        [DataType(DataType.Date)]
        public DateTime fromDate { get; set; }
        public int noOfPeople { get; set; }
    }
    public enum city
    {
        Delhi,
        Hyderabad,
        Bangalore,
        Mumbai
    }
    
}
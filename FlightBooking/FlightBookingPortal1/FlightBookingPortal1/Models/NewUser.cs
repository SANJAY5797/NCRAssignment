using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace FlightBookingPortal1.Models
{
    public class NewUser
    {
        public int userId { get; set; }
        [Required]
        public string firstName { get; set; }
        [Required]
        public string lastName { get; set; }
        [Required]
        public Gender gender { get; set; }
        [DataType(DataType.Date)]
        [Required]
        public DateTime dob { get; set; }
        [Required]
        public isdUser isd { get; set; }
        [Required]
        [DataType(DataType.PhoneNumber)]
        public string phone { get; set; }
        [Required]
        [DataType(DataType.EmailAddress)]
        public string email { get; set; }
        [Required]
        [DataType(DataType.Password)]
        public string password { get; set; }
        [Required]
        public TypeCust type { get; set; }
        [Required]
        public TitleUser title { get; set; }
    }
    public enum Gender
    {
        Male,
        Female
    }
    
    public enum TitleUser
    {
        mr,
        mrs,
        ms,
        doctor,
        master
    }

    public enum TypeCust
    {
        customer,
        agent
    }
    public enum isdUser
    {
        india,
        australia
    }
}
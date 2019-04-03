using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace FlightBookingPortal1.Models
{
    public class UserLogin
    {
        [Display(Name = "Email")]
        public string email { get; set; }
        [Display(Name = "Password")]
        [DataType(DataType.Password)]
        public string password { get; set; }
        public int userid { get; set; }

    }
}
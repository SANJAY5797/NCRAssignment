using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Web;
using System.Web.Mvc;
using FlightBookingPortal1.Models;

namespace FlightBookingPortal1.Controllers
{
    public class NewUserController : Controller
    {
        // GET: NewUser
        public ActionResult Register()
        {
            return View();
        }
        public ActionResult PostUser(NewUser user)
        {
            string uri = "http://localhost:59830/api/userTables";

            var values = new Dictionary<string, string>()
            {
                {"firstName",user.firstName },
                { "lastName",user.lastName},
                {"gender",user.gender.ToString() },
                { "dateOfBirth",user.dob.ToShortDateString()},
                { "ISD",user.isd.ToString()},
                { "phone",user.phone},
                {"type",user.type.ToString() },
                { "title",user.title.ToString()},
                {"email",user.email },
                {
                    "pass",user.password
                },
                { "userId","1"}
            };

            var content = new FormUrlEncodedContent(values);
            var client = new HttpClient();
            var response =client.PostAsync(uri, content);
            response.Wait();
            if (response.Status == System.Threading.Tasks.TaskStatus.RanToCompletion)
            {
                 var resultSet = response.Result.Content.ReadAsStringAsync();
            }
            if (response.Result.IsSuccessStatusCode)
            {
                return Redirect("http://localhost:59316/Home/About");
            }
            else
            {
                ViewBag.Message = "1";
                return Redirect("http://localhost:59316/NewUser/Register");
            }
            
            
        }
    }
}
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Web;
using System.Web.Mvc;

namespace FlightBookingPortal1.Controllers
{
    public class UserController : Controller
    {
        public ActionResult BookTicket()
        {
            if(Session["user"] == null)
            {
                return Redirect("http://localhost:59316/Login/Index");
            }
            else
            {

                return View();
            }
               
        }
        [HttpPost]
        public ActionResult BookTicket(FormCollection fc)
        {
            if (Session["user"] == null)
            {
                return Redirect("http://localhost:59316/Login/Index");
            }
            else
            {
                string uri = "http://localhost:59830/api/CheckFlights";
             
                var client = new HttpClient();
                var values = new Dictionary<string, string>()
            {
                {"fromCity",fc.Get("fromCity") },
                {"toCity",fc.Get("toCity")},
                {"fromDate",fc.Get("fromDate") },
                 {"capacity",fc.Get("noOfPeople") }
            };


                var content = new FormUrlEncodedContent(values);
                var response = client.PostAsync(uri, content);
                if (response.Result.IsSuccessStatusCode)
                {
                    //Session["user"] = user.email;
                    //Session.Add("user", user.email);

                    return View(response.Result);
                }
                else
                {

                    return Redirect("http://localhost:59316/Login/Index");
                }
                
                
            }

        }
        public ActionResult EditDetails()
        {
            
            ViewBag.Message = "Your application description page.";
            if (Session["user"] == null)
            {
                return Redirect("http://localhost:59316/Login/Index");
            }
            else
                return View();
        }

        public ActionResult PreviousBookings()
        {
            ViewBag.Message = "Your contact page.";

            if (Session["user"] == null)
            {
                return Redirect("http://localhost:59316/Login/Index");
            }
            else
                return View();
        }
        public ActionResult Logout()
        {
            Session.RemoveAll();
            return Redirect("http://localhost:59316/Login/Index");
        }
    }
}
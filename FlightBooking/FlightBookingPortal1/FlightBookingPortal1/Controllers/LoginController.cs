using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using FlightBookingPortal1.Models;
using Newtonsoft.Json;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;

namespace FlightBookingPortal1.Controllers
{
    public class LoginController : Controller
    {
        // GET: Login
        public ActionResult Index()
        {
            return View();
        }
        public ActionResult authorize(FormCollection form)
        {
            //UserLogin user = form;
            //    user = this;
            string uri = "http://localhost:59830/api/Login";
            var user = new UserLogin();
            user.email = form.Get("email");
            user.password = form.Get("password");
            var client = new HttpClient();
            var values = new Dictionary<string, string>()
            {
                {"email",user.email },
                {
                    "password",user.password
                }
            };
            var content = new FormUrlEncodedContent(values);
            var response = client.PostAsync(uri, content);
            if (response.Result.IsSuccessStatusCode)
            {
                //Session["user"] = user.email;
                Session.Add("user", user.email);
               return Redirect("http://localhost:59316/HomePage/Index");
            }
            else
            {
               
                return Redirect("http://localhost:59316/Login/Index");
            }
          
       }
        
    }
}
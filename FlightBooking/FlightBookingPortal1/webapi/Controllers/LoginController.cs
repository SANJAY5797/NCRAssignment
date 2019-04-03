using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using webapi.Models;
using Newtonsoft.Json;

namespace webapi.Controllers
{
    public class User
    {
        public string email
        {
            get;
            set;
        }
        public string password
        {
            get;set;
        }
    }
    public class LoginController : ApiController
    {
        // GET: api/Login
        public IEnumerable<string> Get()
        {
            return new string[] { "value1", "value2" };
        }

        // GET: api/Login/5
        public string Get(int id)
        {
            return "value";
        }

       
        // POST: api/Login
        public HttpResponseMessage Post([FromBody]User user)
        {
            //    dynamic result = JsonConvert.DeserializeObject(user);
            // userTable obj = new userTable();
            HttpResponseMessage response = null;
            using (var obj = new FlightProjectEntities())
            {
               var query = obj.userTables.Where(s => s.email == user.email && s.pass == user.password).FirstOrDefault<userTable>();
                if (query!=null)
                {
                    response = Request.CreateResponse(HttpStatusCode.Accepted, "Valid user");
                    return response;
                }
                else
                {
                    response = Request.CreateResponse(HttpStatusCode.BadRequest, "Error message");
                    return response;
                }
            }
              //  return null;
        }

        // PUT: api/Login/5
        public void Put(int id, [FromBody]string value)
        {
        }

        // DELETE: api/Login/5
        public void Delete(int id)
        {
        }
    }
}

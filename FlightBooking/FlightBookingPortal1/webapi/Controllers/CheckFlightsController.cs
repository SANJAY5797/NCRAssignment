using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Threading.Tasks;
using System.Web.Http;
using System.Web.Http.Description;
using webapi.Models;

namespace webapi.Controllers
{

    public class Schedule
    {
        public string fromCity
        {
            get;
            set;
        }
        public string toCity
        {
            get;set;
        }
        public DateTime fromDate
        {
            get;set;
        }
        public int capacity
        {
            get;set;
        }
    }

    public class CheckFlightsController : ApiController
    {
        [HttpPost]
        [ResponseType(typeof(Schedule))]
        public IQueryable<Schedule> Post([FromBody]Schedule schedule)
        {
            //    dynamic result = JsonConvert.DeserializeObject(user);
            // userTable obj = new userTable();
            //HttpResponseMessage response = null;
            //using (FlightProjectEntities2 flightEntityObj = new FlightProjectEntities2())
            //{

            //    //  var query = obj.flightTables.Where(s => s.capacity >= schedule.capacity).FirstOrDefault().flightSchedules.Where(s => s.departureDate >= schedule.fromDate 
            //    //  && s.fromCity == schedule.fromCity
            //    //    && s.toCity == schedule.toCity);
            //    var query = flightEntityObj.flightTables;
            //    return query;
            //}
            FlightProjectEntities2 flightEntityObj = new FlightProjectEntities2();
            var flights = from fli in flightEntityObj.flightSchedules 
                        select new Schedule()
                        {
                            fromCity = fli.fromCity,
                            toCity = fli.toCity,
                            fromDate = fli.departureDate,
                            capacity = fli.flightTable.capacity
                        };
            //CreatedAtRoute()
            return flights;
        }
    }
}

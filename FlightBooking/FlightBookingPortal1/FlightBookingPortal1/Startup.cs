using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(FlightBookingPortal1.Startup))]
namespace FlightBookingPortal1
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}

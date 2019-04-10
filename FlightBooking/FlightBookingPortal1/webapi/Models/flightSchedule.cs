//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated from a template.
//
//     Manual changes to this file may cause unexpected behavior in your application.
//     Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace webapi.Models
{
    using System;
    using System.Collections.Generic;
    
    public partial class flightSchedule
    {
        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2214:DoNotCallOverridableMethodsInConstructors")]
        public flightSchedule()
        {
            this.bookingTables = new HashSet<bookingTable>();
        }
    
        public string flightId { get; set; }
        public string scheduleId { get; set; }
        public string fromCity { get; set; }
        public string toCity { get; set; }
        public System.DateTime arrivalDate { get; set; }
        public System.DateTime departureDate { get; set; }
        public System.TimeSpan arrivalTime { get; set; }
        public System.TimeSpan departureTime { get; set; }
        public int cost { get; set; }
    
        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2227:CollectionPropertiesShouldBeReadOnly")]
        public virtual ICollection<bookingTable> bookingTables { get; set; }
        public virtual flightTable flightTable { get; set; }
    }
}
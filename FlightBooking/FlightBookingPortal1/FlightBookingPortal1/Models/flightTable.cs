//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated from a template.
//
//     Manual changes to this file may cause unexpected behavior in your application.
//     Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace FlightBookingPortal1.Models
{
    using System;
    using System.Collections.Generic;
    
    public partial class flightTable
    {
        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2214:DoNotCallOverridableMethodsInConstructors")]
        public flightTable()
        {
            this.flightSchedules = new HashSet<flightSchedule>();
        }
    
        public string flightId { get; set; }
        public string flightName { get; set; }
        public int capacity { get; set; }
    
        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2227:CollectionPropertiesShouldBeReadOnly")]
        public virtual ICollection<flightSchedule> flightSchedules { get; set; }
    }
}
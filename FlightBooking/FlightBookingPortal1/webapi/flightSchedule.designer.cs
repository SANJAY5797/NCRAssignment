﻿#pragma warning disable 1591
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:4.0.30319.42000
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace webapi
{
	using System.Data.Linq;
	using System.Data.Linq.Mapping;
	using System.Data;
	using System.Collections.Generic;
	using System.Reflection;
	using System.Linq;
	using System.Linq.Expressions;
	using System.ComponentModel;
	using System;
	
	
	[global::System.Data.Linq.Mapping.DatabaseAttribute(Name="FlightProject")]
	public partial class flightScheduleDataContext : System.Data.Linq.DataContext
	{
		
		private static System.Data.Linq.Mapping.MappingSource mappingSource = new AttributeMappingSource();
		
    #region Extensibility Method Definitions
    partial void OnCreated();
    partial void InsertflightSchedule(flightSchedule instance);
    partial void UpdateflightSchedule(flightSchedule instance);
    partial void DeleteflightSchedule(flightSchedule instance);
    partial void InsertflightTable(flightTable instance);
    partial void UpdateflightTable(flightTable instance);
    partial void DeleteflightTable(flightTable instance);
    #endregion
		
		public flightScheduleDataContext() : 
				base(global::System.Configuration.ConfigurationManager.ConnectionStrings["FlightProjectConnectionString"].ConnectionString, mappingSource)
		{
			OnCreated();
		}
		
		public flightScheduleDataContext(string connection) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public flightScheduleDataContext(System.Data.IDbConnection connection) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public flightScheduleDataContext(string connection, System.Data.Linq.Mapping.MappingSource mappingSource) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public flightScheduleDataContext(System.Data.IDbConnection connection, System.Data.Linq.Mapping.MappingSource mappingSource) : 
				base(connection, mappingSource)
		{
			OnCreated();
		}
		
		public System.Data.Linq.Table<flightSchedule> flightSchedules
		{
			get
			{
				return this.GetTable<flightSchedule>();
			}
		}
		
		public System.Data.Linq.Table<flightTable> flightTables
		{
			get
			{
				return this.GetTable<flightTable>();
			}
		}
	}
	
	[global::System.Data.Linq.Mapping.TableAttribute(Name="dbo.flightSchedule")]
	public partial class flightSchedule : INotifyPropertyChanging, INotifyPropertyChanged
	{
		
		private static PropertyChangingEventArgs emptyChangingEventArgs = new PropertyChangingEventArgs(String.Empty);
		
		private string _flightId;
		
		private string _scheduleId;
		
		private string _fromCity;
		
		private string _toCity;
		
		private System.DateTime _arrivalDate;
		
		private System.DateTime _departureDate;
		
		private System.TimeSpan _arrivalTime;
		
		private System.TimeSpan _departureTime;
		
		private int _cost;
		
		private EntityRef<flightTable> _flightTable;
		
    #region Extensibility Method Definitions
    partial void OnLoaded();
    partial void OnValidate(System.Data.Linq.ChangeAction action);
    partial void OnCreated();
    partial void OnflightIdChanging(string value);
    partial void OnflightIdChanged();
    partial void OnscheduleIdChanging(string value);
    partial void OnscheduleIdChanged();
    partial void OnfromCityChanging(string value);
    partial void OnfromCityChanged();
    partial void OntoCityChanging(string value);
    partial void OntoCityChanged();
    partial void OnarrivalDateChanging(System.DateTime value);
    partial void OnarrivalDateChanged();
    partial void OndepartureDateChanging(System.DateTime value);
    partial void OndepartureDateChanged();
    partial void OnarrivalTimeChanging(System.TimeSpan value);
    partial void OnarrivalTimeChanged();
    partial void OndepartureTimeChanging(System.TimeSpan value);
    partial void OndepartureTimeChanged();
    partial void OncostChanging(int value);
    partial void OncostChanged();
    #endregion
		
		public flightSchedule()
		{
			this._flightTable = default(EntityRef<flightTable>);
			OnCreated();
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_flightId", DbType="NChar(20) NOT NULL", CanBeNull=false)]
		public string flightId
		{
			get
			{
				return this._flightId;
			}
			set
			{
				if ((this._flightId != value))
				{
					if (this._flightTable.HasLoadedOrAssignedValue)
					{
						throw new System.Data.Linq.ForeignKeyReferenceAlreadyHasValueException();
					}
					this.OnflightIdChanging(value);
					this.SendPropertyChanging();
					this._flightId = value;
					this.SendPropertyChanged("flightId");
					this.OnflightIdChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_scheduleId", DbType="NChar(20) NOT NULL", CanBeNull=false, IsPrimaryKey=true)]
		public string scheduleId
		{
			get
			{
				return this._scheduleId;
			}
			set
			{
				if ((this._scheduleId != value))
				{
					this.OnscheduleIdChanging(value);
					this.SendPropertyChanging();
					this._scheduleId = value;
					this.SendPropertyChanged("scheduleId");
					this.OnscheduleIdChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_fromCity", DbType="NChar(10) NOT NULL", CanBeNull=false)]
		public string fromCity
		{
			get
			{
				return this._fromCity;
			}
			set
			{
				if ((this._fromCity != value))
				{
					this.OnfromCityChanging(value);
					this.SendPropertyChanging();
					this._fromCity = value;
					this.SendPropertyChanged("fromCity");
					this.OnfromCityChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_toCity", DbType="NChar(10) NOT NULL", CanBeNull=false)]
		public string toCity
		{
			get
			{
				return this._toCity;
			}
			set
			{
				if ((this._toCity != value))
				{
					this.OntoCityChanging(value);
					this.SendPropertyChanging();
					this._toCity = value;
					this.SendPropertyChanged("toCity");
					this.OntoCityChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_arrivalDate", DbType="Date NOT NULL")]
		public System.DateTime arrivalDate
		{
			get
			{
				return this._arrivalDate;
			}
			set
			{
				if ((this._arrivalDate != value))
				{
					this.OnarrivalDateChanging(value);
					this.SendPropertyChanging();
					this._arrivalDate = value;
					this.SendPropertyChanged("arrivalDate");
					this.OnarrivalDateChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_departureDate", DbType="Date NOT NULL")]
		public System.DateTime departureDate
		{
			get
			{
				return this._departureDate;
			}
			set
			{
				if ((this._departureDate != value))
				{
					this.OndepartureDateChanging(value);
					this.SendPropertyChanging();
					this._departureDate = value;
					this.SendPropertyChanged("departureDate");
					this.OndepartureDateChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_arrivalTime", DbType="Time NOT NULL")]
		public System.TimeSpan arrivalTime
		{
			get
			{
				return this._arrivalTime;
			}
			set
			{
				if ((this._arrivalTime != value))
				{
					this.OnarrivalTimeChanging(value);
					this.SendPropertyChanging();
					this._arrivalTime = value;
					this.SendPropertyChanged("arrivalTime");
					this.OnarrivalTimeChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_departureTime", DbType="Time NOT NULL")]
		public System.TimeSpan departureTime
		{
			get
			{
				return this._departureTime;
			}
			set
			{
				if ((this._departureTime != value))
				{
					this.OndepartureTimeChanging(value);
					this.SendPropertyChanging();
					this._departureTime = value;
					this.SendPropertyChanged("departureTime");
					this.OndepartureTimeChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_cost", DbType="Int NOT NULL")]
		public int cost
		{
			get
			{
				return this._cost;
			}
			set
			{
				if ((this._cost != value))
				{
					this.OncostChanging(value);
					this.SendPropertyChanging();
					this._cost = value;
					this.SendPropertyChanged("cost");
					this.OncostChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.AssociationAttribute(Name="flightTable_flightSchedule", Storage="_flightTable", ThisKey="flightId", OtherKey="flightId", IsForeignKey=true)]
		public flightTable flightTable
		{
			get
			{
				return this._flightTable.Entity;
			}
			set
			{
				flightTable previousValue = this._flightTable.Entity;
				if (((previousValue != value) 
							|| (this._flightTable.HasLoadedOrAssignedValue == false)))
				{
					this.SendPropertyChanging();
					if ((previousValue != null))
					{
						this._flightTable.Entity = null;
						previousValue.flightSchedules.Remove(this);
					}
					this._flightTable.Entity = value;
					if ((value != null))
					{
						value.flightSchedules.Add(this);
						this._flightId = value.flightId;
					}
					else
					{
						this._flightId = default(string);
					}
					this.SendPropertyChanged("flightTable");
				}
			}
		}
		
		public event PropertyChangingEventHandler PropertyChanging;
		
		public event PropertyChangedEventHandler PropertyChanged;
		
		protected virtual void SendPropertyChanging()
		{
			if ((this.PropertyChanging != null))
			{
				this.PropertyChanging(this, emptyChangingEventArgs);
			}
		}
		
		protected virtual void SendPropertyChanged(String propertyName)
		{
			if ((this.PropertyChanged != null))
			{
				this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
			}
		}
	}
	
	[global::System.Data.Linq.Mapping.TableAttribute(Name="dbo.flightTable")]
	public partial class flightTable : INotifyPropertyChanging, INotifyPropertyChanged
	{
		
		private static PropertyChangingEventArgs emptyChangingEventArgs = new PropertyChangingEventArgs(String.Empty);
		
		private string _flightId;
		
		private string _flightName;
		
		private int _capacity;
		
		private EntitySet<flightSchedule> _flightSchedules;
		
    #region Extensibility Method Definitions
    partial void OnLoaded();
    partial void OnValidate(System.Data.Linq.ChangeAction action);
    partial void OnCreated();
    partial void OnflightIdChanging(string value);
    partial void OnflightIdChanged();
    partial void OnflightNameChanging(string value);
    partial void OnflightNameChanged();
    partial void OncapacityChanging(int value);
    partial void OncapacityChanged();
    #endregion
		
		public flightTable()
		{
			this._flightSchedules = new EntitySet<flightSchedule>(new Action<flightSchedule>(this.attach_flightSchedules), new Action<flightSchedule>(this.detach_flightSchedules));
			OnCreated();
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_flightId", DbType="NChar(20) NOT NULL", CanBeNull=false, IsPrimaryKey=true)]
		public string flightId
		{
			get
			{
				return this._flightId;
			}
			set
			{
				if ((this._flightId != value))
				{
					this.OnflightIdChanging(value);
					this.SendPropertyChanging();
					this._flightId = value;
					this.SendPropertyChanged("flightId");
					this.OnflightIdChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_flightName", DbType="NChar(20) NOT NULL", CanBeNull=false)]
		public string flightName
		{
			get
			{
				return this._flightName;
			}
			set
			{
				if ((this._flightName != value))
				{
					this.OnflightNameChanging(value);
					this.SendPropertyChanging();
					this._flightName = value;
					this.SendPropertyChanged("flightName");
					this.OnflightNameChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.ColumnAttribute(Storage="_capacity", DbType="Int NOT NULL")]
		public int capacity
		{
			get
			{
				return this._capacity;
			}
			set
			{
				if ((this._capacity != value))
				{
					this.OncapacityChanging(value);
					this.SendPropertyChanging();
					this._capacity = value;
					this.SendPropertyChanged("capacity");
					this.OncapacityChanged();
				}
			}
		}
		
		[global::System.Data.Linq.Mapping.AssociationAttribute(Name="flightTable_flightSchedule", Storage="_flightSchedules", ThisKey="flightId", OtherKey="flightId")]
		public EntitySet<flightSchedule> flightSchedules
		{
			get
			{
				return this._flightSchedules;
			}
			set
			{
				this._flightSchedules.Assign(value);
			}
		}
		
		public event PropertyChangingEventHandler PropertyChanging;
		
		public event PropertyChangedEventHandler PropertyChanged;
		
		protected virtual void SendPropertyChanging()
		{
			if ((this.PropertyChanging != null))
			{
				this.PropertyChanging(this, emptyChangingEventArgs);
			}
		}
		
		protected virtual void SendPropertyChanged(String propertyName)
		{
			if ((this.PropertyChanged != null))
			{
				this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
			}
		}
		
		private void attach_flightSchedules(flightSchedule entity)
		{
			this.SendPropertyChanging();
			entity.flightTable = this;
		}
		
		private void detach_flightSchedules(flightSchedule entity)
		{
			this.SendPropertyChanging();
			entity.flightTable = null;
		}
	}
}
#pragma warning restore 1591
USE [FlightProject]
GO

/****** Object:  Table [dbo].[bookingTable]    Script Date: 05-04-2019 2.37.18 PM ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[bookingTable](
	[bookingId] [nchar](20) NOT NULL,
	[scheduleId] [nchar](20) NOT NULL,
	[bookedDate] [date] NOT NULL,
	[bookedTime] [time](7) NOT NULL,
	[status] [nchar](10) NOT NULL,
 CONSTRAINT [PK_bookingTable] PRIMARY KEY CLUSTERED 
(
	[bookingId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO

ALTER TABLE [dbo].[bookingTable]  WITH CHECK ADD  CONSTRAINT [FK_booking_schedule] FOREIGN KEY([scheduleId])
REFERENCES [dbo].[flightSchedule] ([scheduleId])
GO

ALTER TABLE [dbo].[bookingTable] CHECK CONSTRAINT [FK_booking_schedule]
GO


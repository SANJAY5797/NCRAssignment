USE [FlightProject]
GO

/****** Object:  Table [dbo].[flightSchedule]    Script Date: 05-04-2019 3.05.40 PM ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[flightSchedule](
	[flightId] [nchar](20) NOT NULL,
	[scheduleId] [nchar](20) NOT NULL,
	[fromCity] [nchar](10) NOT NULL,
	[toCity] [nchar](10) NOT NULL,
	[arrivalDate] [date] NOT NULL,
	[departureDate] [date] NOT NULL,
	[arrivalTime] [time](7) NOT NULL,
	[departureTime] [time](7) NOT NULL,
	[cost] [int] NOT NULL,
 CONSTRAINT [PK_flightSchedule] PRIMARY KEY CLUSTERED 
(
	[scheduleId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO

ALTER TABLE [dbo].[flightSchedule]  WITH CHECK ADD  CONSTRAINT [FK_flightId] FOREIGN KEY([flightId])
REFERENCES [dbo].[flightTable] ([flightId])
GO

ALTER TABLE [dbo].[flightSchedule] CHECK CONSTRAINT [FK_flightId]
GO


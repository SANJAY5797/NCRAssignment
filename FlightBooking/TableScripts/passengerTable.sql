USE [FlightProject]
GO

/****** Object:  Table [dbo].[passengerTable]    Script Date: 05-04-2019 3.04.32 PM ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[passengerTable](
	[passengerId] [nchar](20) NOT NULL,
	[firstName] [nchar](20) NOT NULL,
	[lastName] [nchar](30) NOT NULL,
	[phone] [nchar](10) NOT NULL,
	[email] [nchar](50) NOT NULL,
	[ISD] [nchar](10) NOT NULL,
	[gender] [nchar](10) NOT NULL,
	[bookingId] [nchar](20) NOT NULL,
 CONSTRAINT [PK_passengerTable] PRIMARY KEY CLUSTERED 
(
	[passengerId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO

ALTER TABLE [dbo].[passengerTable]  WITH CHECK ADD  CONSTRAINT [FK_Booking_passenger] FOREIGN KEY([bookingId])
REFERENCES [dbo].[bookingTable] ([bookingId])
GO

ALTER TABLE [dbo].[passengerTable] CHECK CONSTRAINT [FK_Booking_passenger]
GO


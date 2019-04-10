USE [FlightProject]
GO

/****** Object:  Table [dbo].[flightTable]    Script Date: 05-04-2019 3.05.09 PM ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[flightTable](
	[flightId] [nchar](20) NOT NULL,
	[flightName] [nchar](20) NOT NULL,
	[capacity] [int] NOT NULL,
 CONSTRAINT [PK_flightTable] PRIMARY KEY CLUSTERED 
(
	[flightId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO


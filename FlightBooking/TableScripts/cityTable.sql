USE [FlightProject]
GO

/****** Object:  Table [dbo].[cityTable]    Script Date: 05-04-2019 3.06.22 PM ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[cityTable](
	[cityCode] [nchar](10) NOT NULL,
	[cityName] [nchar](30) NOT NULL,
 CONSTRAINT [PK_cityTable] PRIMARY KEY CLUSTERED 
(
	[cityCode] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO


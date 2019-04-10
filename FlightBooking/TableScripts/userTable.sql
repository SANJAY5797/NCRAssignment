USE [FlightProject]
GO

/****** Object:  Table [dbo].[userTable]    Script Date: 05-04-2019 2.38.31 PM ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[userTable](
	[userId] [int] IDENTITY(1000,1) NOT NULL,
	[firstName] [nchar](20) NOT NULL,
	[lastName] [nchar](20) NOT NULL,
	[gender] [nchar](10) NOT NULL,
	[dateOfBirth] [date] NOT NULL,
	[ISD] [nchar](20) NOT NULL,
	[phone] [nchar](10) NOT NULL,
	[email] [nchar](50) NOT NULL,
	[pass] [nchar](20) NOT NULL,
	[type] [nchar](10) NOT NULL,
	[title] [nchar](10) NOT NULL,
 CONSTRAINT [PK_userTable] PRIMARY KEY CLUSTERED 
(
	[userId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO


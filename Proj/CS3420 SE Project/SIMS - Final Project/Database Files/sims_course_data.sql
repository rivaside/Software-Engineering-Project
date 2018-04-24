-- MySQL dump 10.13  Distrib 5.7.12, for Win64 (x86_64)
--
-- Host: localhost    Database: sims
-- ------------------------------------------------------
-- Server version	5.7.17-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `course_data`
--

DROP TABLE IF EXISTS `course_data`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `course_data` (
  `CRN_Number` int(11) NOT NULL,
  `Course_ID` varchar(12) DEFAULT NULL,
  `Course_Name` varchar(25) DEFAULT NULL,
  `Course_Time` varchar(25) DEFAULT NULL,
  `First_Name` varchar(12) DEFAULT NULL,
  `Last_Name` varchar(12) DEFAULT NULL,
  `Course_Hours` varchar(5) DEFAULT NULL,
  PRIMARY KEY (`CRN_Number`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `course_data`
--

LOCK TABLES `course_data` WRITE;
/*!40000 ALTER TABLE `course_data` DISABLE KEYS */;
INSERT INTO `course_data` VALUES (12207,'BUSS 4124','Network Administration','2:00-4:15 TH','Stephen','Jones','4'),(15213,'MATH 8017','Calculus II','12:00-1:15 TTH','Anthony','Diaz','3'),(16803,'MATH 8015','Discrete Mathematics','11:00-12:15 MW','Jerry','Larson','3'),(22204,'CHEM 1911','Chemistry','11:00-12:15 MW','Rebecca','Barker','3'),(22304,'ENG 3152','English II','12:00-1:15 TTH','David','Labrador','3'),(22660,'PUBL 5406','Public Relationship ','4:00 5:15 TH','Roy','Pena','2'),(27801,'BUSS 4111','Management','11:00-12:15 TTH','Stephen','Jones','4'),(29464,'SCIE 1802','Environmental Sciences','2:00-4:15 TH','Kelly','Newsom','2'),(30075,'MATH 8021','Liner Algebra','11:00-12:15 MW','Jerry','Larson','2'),(30084,'ECON 1901','Economics','9:00-10:15 MW','Michael','Hurst','4'),(35198,'MATH 8020','Proability and Statistics','4:00-5:15 MW','Richard','Ballenger','3'),(40507,'BUSS 4122','Business ','4:00 5:15 TH','Donald','Foley','4'),(42038,'DANC 2001','Dance','4:00 5:15 M','Charles','Chamberlain','2'),(46947,'BUSS 4120','Business Skills','2:00-4:15 T','Donald','Foley','4'),(53221,'GAME 7660','Game Design','11:00-12:15 TTH','Mark','Nutting','3'),(55406,'BUSS 4123','Finance','11:00-12:15 MW','Frances','Stigall','4'),(60515,'MATH 8016','Calculus I','9:00-10:15 MW','Anthony','Diaz','2'),(71457,'DEBU 8554','Design Business','9:00-10:15 MW','Mark','Nutting','2'),(74501,'BIOL 1910','Biology ','2:00-4:15 TH','Rebecca','Barker','2'),(76706,'SCIE 1801','Earth Sciences','11:00-12:15 TTH','Kelly','Newsom','2'),(78550,'ENG 3151','English I','9:00-10:15 MW','Mark','Todd','3'),(82720,'COMP 1008','Computer Skills','9:00-10:15 TTH','Wayne','Barry','4'),(87110,'COMM 1707','Communcation','4:00 5:15 TH','James','Ehrlich','3'),(97420,'LEAD 1102','Leadership','2:00-4:15 TH','Robert','Park','2');
/*!40000 ALTER TABLE `course_data` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2017-04-30 19:59:40

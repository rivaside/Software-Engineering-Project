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
-- Table structure for table `student_data`
--

DROP TABLE IF EXISTS `student_data`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `student_data` (
  `Student_Id` int(11) NOT NULL,
  `Password` varchar(25) DEFAULT NULL,
  `First_Name` varchar(12) DEFAULT NULL,
  `Last_Name` varchar(12) DEFAULT NULL,
  `Address` varchar(25) DEFAULT NULL,
  `City` varchar(25) DEFAULT NULL,
  `Zip_Code` int(11) NOT NULL,
  `Phone_Number` varchar(12) DEFAULT NULL,
  `DOB` date DEFAULT NULL,
  `SSN` varchar(12) DEFAULT NULL,
  PRIMARY KEY (`Student_Id`),
  KEY `Zip_Code_index` (`Zip_Code`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `student_data`
--

LOCK TABLES `student_data` WRITE;
/*!40000 ALTER TABLE `student_data` DISABLE KEYS */;
INSERT INTO `student_data` VALUES (90019138,'QuallsR97523','Robert','Qualls','395 New Street','Cave Junction',97523,'541-287-1951','1970-08-12','544-28-6046'),(90037632,'SealsR44203','Rigoberto','Seals','1916 Rivendell Drive','Barberton',44203,'330-861-9388','1980-12-26','276-78-5684'),(99002141,'GalindoF27106','Frances','Galindo','397 Fire Access Road','Oldtown',27106,'336-924-4774','1964-07-25','689-05-5518'),(99008102,'YoungV89102','Victor','Young','3736 Hiney Road','Las Vegas',89102,'702-222-9821','1984-12-04','680-03-7598'),(99019108,'HicksonM38614','Minnie','Hickson','639 Saint Clair Street','Clarksdale',38614,'662-627-5689','1971-02-04','428-90-2024'),(99022011,'SmithM44907','Monique','Smith','1736 Langtown Road','Mansfield',44907,'567-231-2194','1959-10-28','278-94-4988'),(99031707,'SmithC15044','Clyde','Smith','3136 Pine Street','Gibsonia',15044,'724-321-1863','1946-03-26','165-26-8734'),(99033436,'SmithA55104','Ariel','Smith','1369 Orchard Street','Saint Paul',55104,'952-601-7925','1960-05-05','474-22-0016'),(99037660,'BakerG76247','Gloria','Baker','4954 Giraffe Hill Drive','Lewisville',76247,'972-317-7508','1976-07-24','633-40-2340'),(99045406,'AlexanderJ80221','Jason','Alexander','4393 Sampson Street','Denver',80221,'303-609-8275','1981-10-16','524-74-2223'),(99048235,'WamsleyD24228','Debra','Wamsley','3684 Payne Street','Clintwood',24228,'276-926-7416','1979-08-07','693-01-7135'),(99053151,'FaulH65101','Herbert','Faul','4806 Maple Court','Taos',65101,'573-395-8650','1965-04-19','494-60-0460'),(99058554,'MooreN2132','Nancy','Moore','2137 Wescam Court','West Roxbury',2132,'781-223-2723','1970-07-27','020-05-8531'),(99061820,'NorbyJ75446','Joy','Norby','3351 Pickens Way','Honey Grove',75446,'903-378-8395','1973-03-21','465-23-3634'),(99065325,'BrooksA90014','Allison','Brooks','1518 Heavens Way','Los Angeles',90014,'949-265-1157','1986-02-03','605-35-2393'),(99072212,'CookP92262','Patsy','Cook','1851 Coleman Avenue','Palm Springs',92262,'760-799-5157','1966-01-23','608-98-4327'),(99080015,'WestJ49262','John','West','1040 Amethyst Drive','North Adams',49262,'517-287-2321','1980-09-19','375-90-5138'),(99084120,'RowlandM94612','Mary','Rowland','1634 Park Street','Oakland',94612,'925-419-6874','1954-06-06','625-52-1590'),(99092111,'SchneiderD29601','Dolores','Schneider','2278 Traction Street','Greenville',29601,'864-538-1515','1994-10-18','247-94-8906'),(99097205,'OwensK84010','Kristal','Owens','1398 Philadelphia Avenue','Bountiful',84010,'801-298-2521','1988-07-15','528-61-0306'),(900346544,'Texans#12','Omar','Siddiqi','9103 Danielle Ct.','Houston',77099,'8324061921','1990-05-28','999-99-9999');
/*!40000 ALTER TABLE `student_data` ENABLE KEYS */;
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

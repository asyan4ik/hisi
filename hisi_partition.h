#ifndef _HISI_PARTITION_TABLE_H_

#define _HISI_PARTITION_TABLE_H_


/*MATE 7 PARTITIONS*/

#define PART_3RDMODEM          "3rdmodem"
#define PART_3RDMODEMNVM       "3rdmodemnvm"
#define PART_3RDMODEMNVMBKP    "3rdmodemnvmbkp" 
#define PART_BOOT              "boot"
#define PART_CACHE             "cache"
#define PART_CUST              "cust"
#define PART_DFX               "dfx"
#define PART_DTS               "dts"
#define PART_FASTBOOT          "fastboot"
#define PART_FW_HIFI           "fw_hifi"
#define PART_FW_LPM3           "fw_lpm3"
#define PART_HIBENCH           "hibench"
#define PART_HISITEST0         "hisitest0"
#define PAR_HISITEST1          "hisitest1"
#define PART_MISC              "misc"
#define PART_MODEM             "modem"
#define PART_MODEM_DSP         "modem_dsp"
#define PART_MODEM_OM          "modem_om"
#define PART_MODEMNVM_BACKUP   "modemnvm_backup"
#define PART_MODEMNVM_FACTORY  "modemnvm_factory"
#define PART_MODEMNVM_IMG      "modemnvm_img"
#define PART_MODEMNVM_SYSTEM   "modemnvm_system"
#define PART_MODEMNVM_UPDATE   "modemnvm_update"
#define PART_NVME              "nvme"
#define PART_OEMINFO           "oeminfo"
#define PART_RECOVERY          "recovery"
#define PART_RECOVERY2         "recovery2"
#define PART_RECOVERY3         "recovery3"
#define PART_RESERVED1         "reserved1"
#define PART_RESERVED2         "reserved2"
#define PART_SECURE_STORAGE    "secure_storage"
#define PART_SENSORHUB         "sensorhub"
#define PART_SPLASH            "splash"
#define PART_SPLASH2           "splash2"
#define PART_SPLASH3           "splash3"
#define PART_SYSTEM            "system"
#define PART_TEEOS             "teeos"
#define PART_USERDATA          "userdata"
#define PART_VRL               "vrl"
#define PART_VRL_BACKUP        "vrl_backup"


/*mmcblk*/      
#define BLK_VRL               "/dev/block/mmcblk0p1"  
#define BLK_VRL_BACKUP        "/dev/block/mmcblk0p2"  
#define BLK_RESERVED1         "/dev/block/mmcblk0p3"  
#define BLK_FASTBOOT          "/dev/block/mmcblk0p4"
#define BLK_FW_LPM3           "/dev/block/mmcblk0p5"  
#define BLK_NVME	          "/dev/block/mmcblk0p6"  
#define BLK_MODEMNVM_FACTORY  "/dev/block/mmcblk0p7"  
#define BLK_HIBENCH           "/dev/block/mmcblk0p8"  
#define BLK_FW_HIFI           "/dev/block/mmcblk0p9"  
#define BLK_TEEOS             "/dev/block/mmcblk0p10"  
#define BLK_MISC	          "/dev/block/mmcblk0p11"  
#define BLK_RESERVED2         "/dev/block/mmcblk0p12"  
#define BLK_BOOT              "/dev/block/mmcblk0p13"  
#define BLK_RECOVERY          "/dev/block/mmcblk0p14"  
#define BLK_RECOVERY3         "/dev/block/mmcblk0p15"  
#define BLK_OEMINFO           "/dev/block/mmcblk0p16"  
#define BLK_SENSORHUB         "/dev/block/mmcblk0p17"  
#define BLK_SPLASH            "/dev/block/mmcblk0p18"  
#define BLK_SPLASH3           "/dev/block/mmcblk0p19"  
#define BLK_DTS               "/dev/block/mmcblk0p20" 
#define BLK_SECURE_STORAGE    "/dev/block/mmcblk0p21" 
#define BLK_DFX               "/dev/block/mmcblk0p22"
#define BLK_MODEMNVM_BACKUP   "/dev/block/mmcblk0p23"
#define BLK_MODEMNVM_IMG      "/dev/block/mmcblk0p24"  
#define BLK_MODEMNVM_SYSTEM   "/dev/block/mmcblk0p25"  
#define BLK_MODEM             "/dev/block/mmcblk0p26"  
#define BLK_MODEM_DSP         "/dev/block/mmcblk0p27"  
#define BLK_MODEM_OM          "/dev/block/mmcblk0p28"  
#define BLK_MODEM_UPDATE      "/dev/block/mmcblk0p29"  
#define BLK_RECOVERY2         "/dev/block/mmcblk0p30"  
#define BLK_3RDMODEM          "/dev/block/mmcblk0p31"  
#define BLK_3RDMODEMNVM       "/dev/block/mmcblk0p32"  
#define BLK_3RDMODEMNVMBKP    "/dev/block/mmcblk0p33"  
#define BLK_SPLASH2           "/dev/block/mmcblk0p34"  
#define BLK_HISITEST0         "/dev/block/mmcblk0p35"  
#define BLK_HISITEST1         "/dev/block/mmcblk0p36"  
#define BLK_CUST              "/dev/block/mmcblk0p37"  
#define BLK_SYSTEM            "/dev/block/mmcblk0p38"  
#define BLK_CACHE             "/dev/block/mmcblk0p39"  
#define BLK_USERDATA          "/dev/block/mmcblk0p40"


/*block2mtd:mmcblk*/ 

#define BLK_MTD_VRL               "block2mtd: /dev/block/mmcblk0p1"  
#define BLK_MTD_VRL_BACKUP        "block2mtd: /dev/block/mmcblk0p2"  
#define BLK_MTD_RESERVED1         "block2mtd: /dev/block/mmcblk0p3"  
#define BLK_MTD_FASTBOOT          "block2mtd: /dev/block/mmcblk0p4"
#define BLK_MTD_FW_LPM3           "block2mtd: /dev/block/mmcblk0p5"  
#define BLK_MTD_NVME	          "block2mtd: /dev/block/mmcblk0p6"  
#define BLK_MTD_MODEMNVM_FACTORY  "block2mtd: /dev/block/mmcblk0p7"  
#define BLK_MTD_HIBENCH           "block2mtd: /dev/block/mmcblk0p8"  
#define BLK_MTD_FW_HIFI           "block2mtd: /dev/block/mmcblk0p9"  
#define BLK_MTD_TEEOS             "block2mtd: /dev/block/mmcblk0p10"  
#define BLK_MTD_MISC	          "block2mtd: /dev/block/mmcblk0p11"  
#define BLK_MTD_RESERVED2         "block2mtd: /dev/block/mmcblk0p12"  
#define BLK_MTD_BOOT              "block2mtd: /dev/block/mmcblk0p13"  
#define BLK_MTD_RECOVERY          "block2mtd: /dev/block/mmcblk0p14"  
#define BLK_MTD_RECOVERY3         "block2mtd: /dev/block/mmcblk0p15"  
#define BLK_MTD_OEMINFO           "block2mtd: /dev/block/mmcblk0p16"  
#define BLK_MTD_SENSORHUB         "block2mtd: /dev/block/mmcblk0p17"  
#define BLK_MTD_SPLASH            "block2mtd: /dev/block/mmcblk0p18"  
#define BLK_MTD_SPLASH3           "block2mtd: /dev/block/mmcblk0p19"  
#define BLK_MTD_DTS               "block2mtd: /dev/block/mmcblk0p20" 
#define BLK_MTD_SECURE_STORAGE    "block2mtd: /dev/block/mmcblk0p21" 
#define BLK_MTD_DFX               "block2mtd: /dev/block/mmcblk0p22"
#define BLK_MTD_MODEMNVM_BACKUP   "block2mtd: /dev/block/mmcblk0p23"
#define BLK_MTD_MODEMNVM_IMG      "block2mtd: /dev/block/mmcblk0p24"  
#define BLK_MTD_MODEMNVM_SYSTEM   "block2mtd: /dev/block/mmcblk0p25"  
#define BLK_MTD_MODEM             "block2mtd: /dev/block/mmcblk0p26"  
#define BLK_MTD_MODEM_DSP         "block2mtd: /dev/block/mmcblk0p27"  
#define BLK_MTD_MODEM_OM          "block2mtd: /dev/block/mmcblk0p28"  
#define BLK_MTD_MODEM_UPDATE      "block2mtd: /dev/block/mmcblk0p29"  
#define BLK_MTD_RECOVERY2         "block2mtd: /dev/block/mmcblk0p30"  
#define BLK_MTD_3RDMODEM          "block2mtd: /dev/block/mmcblk0p31"  
#define BLK_MTD_3RDMODEMNVM       "block2mtd: /dev/block/mmcblk0p32"  
#define BLK_MTD_3RDMODEMNVMBKP    "block2mtd: /dev/block/mmcblk0p33"  
#define BLK_MTD_SPLASH2           "block2mtd: /dev/block/mmcblk0p34"  
#define BLK_MTD_HISITEST0         "block2mtd: /dev/block/mmcblk0p35"  
#define BLK_MTD_HISITEST1         "block2mtd: /dev/block/mmcblk0p36"  
#define BLK_MTD_CUST              "block2mtd: /dev/block/mmcblk0p37"  
#define BLK_MTD_SYSTEM            "block2mtd: /dev/block/mmcblk0p38"  
#define BLK_MTD_CACHE             "block2mtd: /dev/block/mmcblk0p39"  
#define BLK_MTD_USERDATA          "block2mtd: /dev/block/mmcblk0p40"


#endif

#pragma once

#include <string>
#include <regex>
#include <map>

#include "Utils.h"
#include "SdkHeaders.h"


// Maps
#define CONST_MAP_ID_CTF_KATABATIC              1447
#define CONST_MAP_ID_CTF_ARXNOVENA              1456
#define CONST_MAP_ID_CTF_DRYDOCK                1457
#define CONST_MAP_ID_RABBIT_OUTSKIRTS           1458
#define CONST_MAP_ID_RABBIT_QUICKSAND           1461
#define CONST_MAP_ID_CTF_CROSSFIRE              1462
#define CONST_MAP_ID_RABBIT_CROSSFIRE           1464
#define CONST_MAP_ID_CTF_BELLAOMEGA             1473
#define CONST_MAP_ID_TDM_DRYDOCKNIGHT           1480
#define CONST_MAP_ID_TDM_CROSSFIRE              1482
#define CONST_MAP_ID_TDM_QUICKSAND              1484
#define CONST_MAP_ID_TDM_NIGHTABATIC            1485
#define CONST_MAP_ID_TDM_INFERNO                1487
#define CONST_MAP_ID_TDM_SULFURCOVE             1488
#define CONST_MAP_ID_TDM_OUTSKIRTS              1490
#define CONST_MAP_ID_RABBIT_INFERNO             1491
#define CONST_MAP_ID_CTF_TEMPLERUINS            1493
#define CONST_MAP_ID_RABBIT_NIGHTABATIC         1494
#define CONST_MAP_ID_ARENA_AIRARENA             1495
#define CONST_MAP_ID_RABBIT_SULFURCOVE          1496
#define CONST_MAP_ID_ARENA_WALLEDIN             1497
#define CONST_MAP_ID_ARENA_LAVAARENA            1498
#define CONST_MAP_ID_CTF_TARTARUS               1512
#define CONST_MAP_ID_CTF_CANYONCRUSADEREVIVAL   1514
#define CONST_MAP_ID_CTF_RAINDANCE              1516
#define CONST_MAP_ID_CAH_KATABATIC              1521
#define CONST_MAP_ID_CTF_STONEHENGE             1522
#define CONST_MAP_ID_CTF_SUNSTAR                1523
#define CONST_MAP_ID_CAH_DRYDOCKNIGHT           1525
#define CONST_MAP_ID_CAH_OUTSKIRTS3P            1526
#define CONST_MAP_ID_CAH_RAINDANCE              1528
#define CONST_MAP_ID_ARENA_HINTERLANDS          1533
#define CONST_MAP_ID_CTF_PERMAFROST             1534
#define CONST_MAP_ID_CAH_SULFURCOVE             1535
#define CONST_MAP_ID_TDM_MIASMA                 1536
#define CONST_MAP_ID_CAH_TARTARUS               1537
#define CONST_MAP_ID_CTF_DANGEROUSCROSSING      1538
#define CONST_MAP_ID_BLITZ_KATABATIC            1539
#define CONST_MAP_ID_BLITZ_ARXNOVENA            1540
#define CONST_MAP_ID_BLITZ_DRYDOCK              1541
#define CONST_MAP_ID_BLITZ_CROSSFIRE            1542
#define CONST_MAP_ID_CTF_BLUESHIFT              1543
#define CONST_MAP_ID_ARENA_WHITEOUT             1544
#define CONST_MAP_ID_ARENA_FRAYTOWN             1545
#define CONST_MAP_ID_ARENA_UNDERCROFT           1546
#define CONST_MAP_ID_CAH_CANYONCRUSADEREVIVAL   1548
#define CONST_MAP_ID_BLITZ_CANYONCRUSADEREVIVAL 1549
#define CONST_MAP_ID_BLITZ_BELLAOMEGA           1550
#define CONST_MAP_ID_CTF_BELLAOMEGANS           1551
#define CONST_MAP_ID_BLITZ_BLUESHIFT            1552
#define CONST_MAP_ID_CTF_TERMINUS               1553
#define CONST_MAP_ID_CTF_ICECOASTER             1554
#define CONST_MAP_ID_CTF_PERDITION              1555
#define CONST_MAP_ID_TDM_PERDITION              1557
#define CONST_MAP_ID_BLITZ_ICECOASTER           1558
#define CONST_MAP_ID_BLITZ_TERMINUS             1559
#define CONST_MAP_ID_CTF_HELLFIRE               1560
#define CONST_MAP_ID_BLITZ_HELLFIRE             1561

// Projectiles (not real game-defined constants)
#define CONST_PROJ_ID_GRENADE                   10000
#define CONST_PROJ_ID_STICKY_GRENADE            10001
#define CONST_PROJ_ID_LACERATOR                 10002
#define CONST_PROJ_ID_MINE                      10003
#define CONST_PROJ_ID_CLAYMORE                  10004
#define CONST_PROJ_ID_PRISM_MINE                10005
#define CONST_PROJ_ID_REPAIR_DEPLOYABLE         10006
#define CONST_PROJ_ID_THROW_DEPLOYABLE          10007
#define CONST_PROJ_ID_TRACKING_MISSILE          10008
#define CONST_PROJ_ID_TRACER                    10009
#define CONST_PROJ_ID_CLIENT_TRACER             10010
#define CONST_PROJ_ID_CALL_IN_BASE              10011
#define CONST_PROJ_ID_ORBITAL_STRIKE            10012
#define CONST_PROJ_ID_TACTICAL_STRIKE           10013
#define CONST_PROJ_ID_AP_GRENADE                10014
#define CONST_PROJ_ID_ARC8                      10015
#define CONST_PROJ_ID_ARMORED_CLAYMORE          10016
#define CONST_PROJ_ID_ARX_BUSTER                10017
#define CONST_PROJ_ID_ARX_BUSTER_MKD            10018
#define CONST_PROJ_ID_ARX_SHOTGUN               10019
#define CONST_PROJ_ID_ASSAULT_RIFLE             10020
#define CONST_PROJ_ID_ASSAULT_RIFLE_MKD         10021
#define CONST_PROJ_ID_AV_MINE                   10022
#define CONST_PROJ_ID_BOLT_LAUNCHER             10023
#define CONST_PROJ_ID_BUCKLER                   10024
#define CONST_PROJ_ID_CHAINGUN                  10025
#define CONST_PROJ_ID_CHAINGUN_MKD              10026
#define CONST_PROJ_ID_CLAYMORE_MKD              10027
#define CONST_PROJ_ID_CONCUSSION_GRENADE        10028
#define CONST_PROJ_ID_CONCUSSION_GRENADE_MKD    10029
#define CONST_PROJ_ID_DISK_TOSS                 10030
#define CONST_PROJ_ID_SPINFUSOR                 10031
#define CONST_PROJ_ID_TC24                      10032
#define CONST_PROJ_ID_ELF_FLAK                  10033
#define CONST_PROJ_ID_EMP_GRENADE               10034
#define CONST_PROJ_ID_EMP_GRENADE_MKD           10035
#define CONST_PROJ_ID_FALCON                    10036
#define CONST_PROJ_ID_FLARE_GRENADE             10037
#define CONST_PROJ_ID_GRENADE_MKD               10038
#define CONST_PROJ_ID_GRENADE_LAUNCHER          10039
#define CONST_PROJ_ID_GRENADE_LAUNCHER_LIGHT    10040
#define CONST_PROJ_ID_GRENADE_T5                10041
#define CONST_PROJ_ID_GRENADE_XL                10042
#define CONST_PROJ_ID_GRENADE_XL_MKD            10043
#define CONST_PROJ_ID_HEAVY_AP_GRENADE          10044
#define CONST_PROJ_ID_HEAVY_AP_GRENADE_MKD      10045
#define CONST_PROJ_ID_HEAVY_BOLT_LAUNCHER       10046
#define CONST_PROJ_ID_HEAVY_IMPACT_NITRON       10047
#define CONST_PROJ_ID_HEAVY_SPINFUSOR           10048
#define CONST_PROJ_ID_HEAVY_SPINFUSOR_MKD       10049
#define CONST_PROJ_ID_TWINFUSOR                 10050
#define CONST_PROJ_ID_HEAVY_TWINFUSOR           10051
#define CONST_PROJ_ID_HONORFUSOR                10052
#define CONST_PROJ_ID_IMPACT_BOMBLETS           10053
#define CONST_PROJ_ID_LIGHT_ASSAULT_RIFLE       10054
#define CONST_PROJ_ID_LIGHT_SPINFUSOR           10055
#define CONST_PROJ_ID_LIGHT_SPINFUSOR_100X      10056
#define CONST_PROJ_ID_LIGHT_SPINFUSOR_MKD       10057
#define CONST_PROJ_ID_LIGHT_STICKY_GRENADE      10058
#define CONST_PROJ_ID_LIGHT_TWINFUSOR           10059
#define CONST_PROJ_ID_LR1_MORTAR                10060
#define CONST_PROJ_ID_MIRV_GRENADE              10061
#define CONST_PROJ_ID_MIRV_LAUNCHER             10062
#define CONST_PROJ_ID_MORTAR_LAUNCHER           10063
#define CONST_PROJ_ID_MORTAR_LAUNCHER_MKD       10064
#define CONST_PROJ_ID_MOTION_SENSOR             10065
#define CONST_PROJ_ID_NINJA_SMOKE               10066
#define CONST_PROJ_ID_NJ4_SMG                   10067
#define CONST_PROJ_ID_NJ4_SMG_MKD               10068
#define CONST_PROJ_ID_NJ5_SMG                   10069
#define CONST_PROJ_ID_NOVA_COLT                 10070
#define CONST_PROJ_ID_NOVA_COLT_MKD             10071
#define CONST_PROJ_ID_PLASMA_CANNON             10072
#define CONST_PROJ_ID_PLASMA_GUN                10073
#define CONST_PROJ_ID_PROXIMITY_GRENADE         10074
#define CONST_PROJ_ID_REMOTE_ARX_BUSTER         10075
#define CONST_PROJ_ID_RHINO_SMG                 10076
#define CONST_PROJ_ID_RHINO_SMG_MKD             10077
#define CONST_PROJ_ID_ROCKET_LAUNCHER           10078
#define CONST_PROJ_ID_TRACKING_MISSILE_DUMBFIRE 10079
#define CONST_PROJ_ID_TRACKING_MISSILE_MKD      10080
#define CONST_PROJ_ID_SN7                       10081
#define CONST_PROJ_ID_SN7_MKD                   10082
#define CONST_PROJ_ID_SPIKE_GRENADE             10083
#define CONST_PROJ_ID_SPIKE_GRENADE_MKD         10084
#define CONST_PROJ_ID_SPIKE_LAUNCHER            10085
#define CONST_PROJ_ID_SPINFUSOR_100X            10086
#define CONST_PROJ_ID_SPINFUSOR_D               10087
#define CONST_PROJ_ID_SPINFUSOR_D_MKD           10088
#define CONST_PROJ_ID_STEALTH_SPINFUSOR         10089
#define CONST_PROJ_ID_ST_GRENADE                10090
#define CONST_PROJ_ID_STICKY_GRENADE_MKD        10091
#define CONST_PROJ_ID_TARGETING_BEACON          10092
#define CONST_PROJ_ID_TCN4_SMG                  10093
#define CONST_PROJ_ID_TCN4_SMG_MKD              10094
#define CONST_PROJ_ID_TCNG                      10095
#define CONST_PROJ_ID_TCNG_MKD                  10096
#define CONST_PROJ_ID_THROWING_KNIVES           10097
#define CONST_PROJ_ID_THUMPER                   10098
#define CONST_PROJ_ID_THUMPER_D                 10099
#define CONST_PROJ_ID_THUMPER_D_MKD             10100
#define CONST_PROJ_ID_WHITE_OUT                 10101
#define CONST_PROJ_ID_X1_RIFLE                  10102
#define CONST_PROJ_ID_ANTI_AIR_TURRET           10103
#define CONST_PROJ_ID_BASE_TURRET               10104
#define CONST_PROJ_ID_BEOWULF_GUNNER            10105
#define CONST_PROJ_ID_BEOWULF_PILOT             10106
#define CONST_PROJ_ID_BXT                       10107
#define CONST_PROJ_ID_CHAINGUN_BULLET_TRACER    10108
#define CONST_PROJ_ID_GRAV_CYCLE_PILOT          10109
#define CONST_PROJ_ID_HAVOC_PILOT               10110
#define CONST_PROJ_ID_HERC_GUNNER               10111
#define CONST_PROJ_ID_HERC_PILOT                10112
#define CONST_PROJ_ID_LIGHT_TURRET              10113
#define CONST_PROJ_ID_MIRV_LAUNCHER_SECONDARY   10114
#define CONST_PROJ_ID_MIRV_GRENADE_SECONDARY    10115
#define CONST_PROJ_ID_PISTOL_BULLET_TRACER      10116
#define CONST_PROJ_ID_SAP20                     10117
#define CONST_PROJ_ID_SHRIKE_PILOT              10118
#define CONST_PROJ_ID_SPIKE_LAUNCHER_SECONDARY  10119
#define CONST_PROJ_ID_SPIKE_LAUNCHER_THIRD      10120
#define CONST_PROJ_ID_WALL_TURRET               10121

// Subdevices (not real game-defined constants)

#define CONST_SUBDEVICE_ID_EXR_TURRET           11000
#define CONST_SUBDEVICE_ID_BASE_TURRET          11001
#define CONST_SUBDEVICE_ID_FORCE_FIELD          11002
#define CONST_SUBDEVICE_ID_LIGHT_TURRET         11003


namespace Data
{
    int getItemId(const std::string& className, const std::string &itemName);
    UClass* getRankByXp(int rankXp);
    int getTotalXpByRank(int rankNum, int xp);

    extern std::map<std::string, int> weapons[3];
    extern std::map<std::string, int> packs[3];
    extern std::map<std::string, int> skins[3];
    extern std::map<std::string, int> perks;
    extern std::map<std::string, int> voices;
    extern std::map<int, std::string> item_id_to_name;
    extern std::map<int, std::string> perk_id_to_name;
    extern std::vector<int> perks_by_slot[2];
    extern std::map<int, std::string> voice_id_to_name;
    extern std::map<int, std::string> weapon_id_to_proj_name;
    extern std::map<int, UClass*> weapon_id_to_weapon_class;
    extern std::map<std::string, int> vehicle_weapons;
    extern std::map<int, UClass*> vehicle_weapon_id_to_class;
    extern std::map<int, std::string> vehicle_weapon_id_to_name;
    extern std::map<std::string, int> vehicles;
    extern std::map<int, std::string> vehicle_id_to_name;
    extern std::map<int, UClass*> vehicle_id_to_class;
    extern std::map<std::string, int> classes;
    extern std::map<std::string, int> armor_class_to_id;
    extern std::map<int, std::string> armor_class_id_to_name;
    extern std::map<int, std::string> armor_class_id_to_armor_mod_name;
    extern std::map<std::string, int> value_mod_types;
    extern std::map<std::string, int> crosshairs;
    extern int classes_id[3];
    extern std::map<int, UClass*> class_id_to_class;
    extern std::map<int, std::string> class_id_to_name;
    extern std::map<int, int> class_id_to_nb;
    extern std::string class_type_name[];
    extern std::string equip_type_name[];
    extern std::map<std::string, int> map_id;
    extern std::map<int, std::string> map_id_to_name;
    extern std::map<int, std::string> map_id_to_filename;
    extern std::map<std::string, int> projectiles;
    extern std::map<int, std::string> projectile_id_to_name;
    extern std::map<std::string, UClass*> projectile_classes;
    extern std::map<UClass*, std::string> projectile_class_to_name;
    extern std::map<std::string, int> subdevices;
    extern std::map<int, std::string> subdevice_id_to_name;
}

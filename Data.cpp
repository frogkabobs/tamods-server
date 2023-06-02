#include "Data.h"

namespace Data
{
    std::map<std::string, int> weapons[3] =
    {
        // Light
        {
            // Impact
            { R"rx(^(spin(fusor)?|light(spin)?(fusor)?)$)rx", CONST_WEAPON_ID_SPINFUSOR_LIGHT },
            { R"rx(^(dueling(spin)?(fusor)?)$)rx", CONST_WEAPON_ID_SPINFUSOR_LIGHT_MKD },
            { R"rx(^(stealth(spin)?(fusor)?)$)rx", CONST_WEAPON_ID_STEALTHLIGHTSPINFUSOR },
            { R"rx(^(bolt|boltlauncher)$)rx", CONST_WEAPON_ID_LAUNCHER_BOLT },
            { R"rx(^(twin|twinfusor|lighttwinfusor)$)rx", CONST_WEAPON_ID_LIGHTTWINFUSOR },
            { R"rx(^(blinks?|blinks?fusor)$)rx", CONST_WEAPON_ID_SPINFUSOR_LIGHT_100X },
            // Timed
            { R"rx(^((light)?(gl|grenadelauncher)|lgl)$)rx", CONST_WEAPON_ID_LIGHTGRENADELAUNCHER },
            { R"rx(^(jackal)$)rx", CONST_WEAPON_ID_REMOTE_ARX_BUSTER },
            // Speciality
            { R"rx(^(bxt|bxt1|bxt1rifle)$)rx", CONST_WEAPON_ID_RIFLE_SNIPER },
            { R"rx(^((bxt1a|bxt-1a|bxt1-a|bxt-1a)(rifle)?)$)rx", CONST_WEAPON_ID_RIFLE_SNIPER_MKD },
            { R"rx(^(phase|phaserifle)$)rx", CONST_WEAPON_ID_RIFLE_PHASE },
            { R"rx(^(sap(20)?(rifle)?)$)rx", CONST_WEAPON_ID_SAP20 },
            { R"rx(^(melee|knife|sword)$)rx", CONST_WEAPON_ID_MELEE },
            { R"rx(^(defaultrepairtool)$)rx", CONST_WEAPON_ID_REPAIR_TOOL },
            // Bullet
            { R"rx(^(falcon)$)rx", CONST_WEAPON_ID_PISTOL_FALCON },
            { R"rx(^(lightassaultrifle|lar|ar|assaultrifle|rifle)$)rx", CONST_WEAPON_ID_RIFLE_ASSAULT_LIGHT },
            { R"rx(^(sparrow)$)rx", CONST_WEAPON_ID_PISTOL_SPARROW },
            { R"rx(^(throwingknives|knives)$)rx", CONST_WEAPON_ID_THROWINGKNIVES },
            { R"rx(^(rhino(smg)?)$)rx", CONST_WEAPON_ID_SMG_RHINO },
            { R"rx(^(arcticrhino(smg)?)$)rx", CONST_WEAPON_ID_SMG_RHINO_MKD },
            { R"rx(^(sn7(silenced)?(pistol)?)$)rx", CONST_WEAPON_ID_PISTOL_SN7 },
            { R"rx(^(arcticsn7(silenced)?(pistol)?)$)rx", CONST_WEAPON_ID_PISTOL_SN7_MKD },
            // Short Range
            { R"rx(^(shotgun)$)rx", CONST_WEAPON_ID_SHOTGUN },
            { R"rx(^(holdout(shotgun)?)$)rx", CONST_WEAPON_ID_SHOTGUN_MKD },
            { R"rx(^((accurized|accurised|sniper)(shotgun)?)$)rx", CONST_WEAPON_ID_ACCURIZEDSHOTGUN },
            { R"rx(^(shocklance)$)rx", CONST_WEAPON_ID_PISTOL_H1 },
            // Belt
            { R"rx(^(nitrons?|impactnitrons?|impacts?)$)rx", CONST_WEAPON_ID_GRENADE_NITRON },
            { R"rx(^(compactnitrons?|compacts?)$)rx", CONST_WEAPON_ID_GRENADE_NITRON_MKD },
            { R"rx(^(explosivenitrons?|explosives?)$)rx", CONST_WEAPON_ID_GRENADE_ST },
            { R"rx(^(t5s?(grenades?)?)$)rx", CONST_WEAPON_ID_GRENADE_T5 },
            { R"rx(^(stickygrenades?|sticky|stickies)$)rx", CONST_WEAPON_ID_GRENADE_STICKY },
            { R"rx(^(stickygrenades?xl|stickyxl|stickiesxl)$)rx", CONST_WEAPON_ID_GRENADE_STICKY_MKD },
            { R"rx(^(claymores?|claymoremines?)$)rx", CONST_WEAPON_ID_MINE_CLAYMORE },
            { R"rx(^(motionmines?)$)rx", CONST_WEAPON_ID_MINE_ARMOREDCLAYMORE },
            { R"rx(^(prismmines?|mines?)$)rx", CONST_WEAPON_ID_MINE_PRISM },
            { R"rx(^(chaffs?(grenades?)?)$)rx", CONST_WEAPON_ID_GRENADE_NINJASMOKE },
            { R"rx(^(impactbomblets)$)rx", CONST_WEAPON_ID_IMPACTBOMBLETS },
            { R"rx(^(heavyimpact(nitron))$)rx", CONST_WEAPON_ID_GRENADE_NITRON_HEAVY },
        },

        // Medium
        {
            // Impact
            { R"rx(^(spinfusor|spin)$)rx", CONST_WEAPON_ID_SPINFUSOR },
            { R"rx(^(thumper)$)rx", CONST_WEAPON_ID_THUMPER },
            { R"rx(^(thumperd)$)rx", CONST_WEAPON_ID_THUMPER_D },
            { R"rx(^(thumperdx)$)rx", CONST_WEAPON_ID_THUMPERD_MKD },
            { R"rx(^(twinfusor)$)rx", CONST_WEAPON_ID_TWINFUSOR },
            { R"rx(^(blinks?|blinks?fusor|sparespin(fusor)?)$)rx", CONST_WEAPON_ID_SPINFUSOR_100X },
            { R"rx(^(honorfusor|honourfusor|honor)$)rx", CONST_WEAPON_ID_HONORFUSOR },
            { R"rx(^(buckler)$)rx", CONST_WEAPON_ID_BUCKLER },
            // Timed
            { R"rx(^(arxbuster|arx)$)rx", CONST_WEAPON_ID_ARX_BUSTER },
            { R"rx(^(dustdevil)$)rx", CONST_WEAPON_ID_ARX_BUSTER_MKD },
            { R"rx(^(grenadelauncher|nadelauncher|launcher|gl)$)rx", CONST_WEAPON_ID_LAUNCHER_GRENADE },
            // Speciality
            { R"rx(^(improvedrepairtool|repairtool|repair)$)rx", CONST_WEAPON_ID_REPAIR_TOOL_SD },
            { R"rx(^(longrangerepairtool)$)rx", CONST_WEAPON_ID_REPAIR_TOOL_SD_MKD },
            { R"rx(^(elf(projector)?)$)rx", CONST_WEAPON_ID_ELFPROJECTOR },
            { R"rx(^(melee|knife|sword)$)rx", CONST_WEAPON_ID_MELEE },
            { R"rx(^(defaultrepairtool)$)rx", CONST_WEAPON_ID_REPAIR_TOOL },
            // Bullet
            { R"rx(^(assaultrifle|rifle|ar)$)rx", CONST_WEAPON_ID_RIFLE_ASSAULT },
            { R"rx(^(gast('s)?(rifle)?)$)rx", CONST_WEAPON_ID_RIFLE_ASSAULT_MKD },
            { R"rx(^(nj4smg|nj4)$)rx", CONST_WEAPON_ID_SMG_NJ4 },
            { R"rx(^(desertnj4|desertnj4smg)$)rx", CONST_WEAPON_ID_SMG_NJ4_MKD },
            { R"rx(^(nj5(-?b)?(smg)?)$)rx", CONST_WEAPON_ID_NJ5SMG },
            { R"rx(^(tcn4(smg)?)$)rx", CONST_WEAPON_ID_SMG_TCN4 },
            { R"rx(^(tcn4rockwind(smg)?)$)rx", CONST_WEAPON_ID_SMG_TCN4_MKD },
            { R"rx(^(tc24)$)rx", CONST_WEAPON_ID_TC24 },
            { R"rx(^(plasmagun|plasma)$)rx", CONST_WEAPON_ID_PLASMA_GUN },
            { R"rx(^(nova|blaster|novablaster)$)rx", CONST_WEAPON_ID_PISTOL_NOVA_COLT },
            { R"rx(^(eaglepistol|eagle|pistol)$)rx", CONST_WEAPON_ID_PISTOL_EAGLE },
            // Short range
            { R"rx(^(sawed-?offshotgun|shotgun|sawed-?off)$)rx", CONST_WEAPON_ID_SHOTGUN_SAWED_OFF },
            { R"rx(^(flak(cannon)?)$)rx", CONST_WEAPON_ID_TC24 },
            { R"rx(^(arxshotgun)$)rx", CONST_WEAPON_ID_SHOTGUN_ARX },
            // Belt
            { R"rx(^(emps?|empgrenades?)$)rx", CONST_WEAPON_ID_GRENADE_EMP },
            { R"rx(^(emps?xls?|emps?xlgrenades?)$)rx", CONST_WEAPON_ID_GRENADE_EMP_MKD },
            { R"rx(^(blackouts?|blackoutgrenades?)$)rx", CONST_WEAPON_ID_GRENADE_WHITEOUT },
            { R"rx(^(clustergrenades?|clusters?)$)rx", CONST_WEAPON_ID_MIRV_GRENADE },
            { R"rx(^(anti-?personnelgrenades?|aps?|apgrenades?)$)rx", CONST_WEAPON_ID_GRENADE_AP },
            { R"rx(^(fraggrenades?(xl)?|frags?(xl)?|grenades?(xl)?)$)rx", CONST_WEAPON_ID_GRENADE_XL },
            { R"rx(^(proximitys?(grenades?)?|proxies|proxys?)$)rx", CONST_WEAPON_ID_PROXIMITY_GRENADE },
            { R"rx(^(short-?fusefrags?(grenades?)?|short-?fuses?)$)rx", CONST_WEAPON_ID_GRENADE_XL_MKD },
            { R"rx(^(tcng(grenade)?)$)rx", CONST_WEAPON_ID_TCNG },
            { R"rx(^(tcng(quick|short)?-?fuse(grenade)?)$)rx", CONST_WEAPON_ID_TCNG_MKD },
            { R"rx(^(motionsensors?)$)rx", CONST_WEAPON_ID_MOTIONALARM },
            { R"rx(^(repairkits?)$)rx", CONST_WEAPON_ID_REPAIR_DEPLOYABLE },
            { R"rx(^(flare(grenade)?)$)rx", CONST_WEAPON_ID_GRENADE_FLARE },
            { R"rx(^(defectivefrag)$)rx", CONST_WEAPON_ID_GRENADE_MKD },
        },

        // Heavy
        {
            // Impact
            { R"rx(^(spinfusormkd)$)rx", CONST_WEAPON_ID_SPINFUSOR_D },
            { R"rx(^(spinfusormk-?x)$)rx", CONST_WEAPON_ID_SPINFUSOR_D_MKD },
            { R"rx(^(heavy(spin)?(fusor)?|spin(fusor)?|fusor)$)rx", CONST_WEAPON_ID_SPINFUSOR_HEAVY },
            { R"rx(^(devastator(spinfusor)?)$)rx", CONST_WEAPON_ID_SPINFUSOR_HEAVY_MKD },
            { R"rx(^(heavyboltlauncher|boltlauncher|bolt)$)rx", CONST_WEAPON_ID_LAUNCHER_BOLT_HEAVY },
            { R"rx(^((heavy)?blinks?(fusor)?)$)rx", CONST_WEAPON_ID_SPINFUSOR_HEAVY_MKD },
            { R"rx(^(heavytwinfusor|twinfusor|twin)$)rx", CONST_WEAPON_ID_HEAVYTWINFUSOR },
            { R"rx(^(rocketlauncher)$)rx", CONST_WEAPON_ID_ROCKETLAUNCHER },
            // Timed
            { R"rx(^((fusion)?mortardeluxe)$)rx", CONST_WEAPON_ID_LAUNCHER_MORTAR_MKD },
            { R"rx(^(fusionmortar|mortar)$)rx", CONST_WEAPON_ID_LAUNCHER_MORTAR },
            { R"rx(^(mirvlauncher|mirv)$)rx", CONST_WEAPON_ID_LAUNCHER_MIRV },
            { R"rx(^(lr1mortar)$)rx", CONST_WEAPON_ID_LR1MORTAR },
            // Speciality
            { R"rx(^(saberlauncher|saber)$)rx", CONST_WEAPON_ID_LAUNCHER_SABER },
            { R"rx(^(titanlauncher|titan)$)rx", CONST_WEAPON_ID_LAUNCHER_SABER_MKD },
            { R"rx(^(gladiator)$)rx", CONST_WEAPON_ID_SPIKELAUNCHER },
            { R"rx(^(melee|knife|sword)$)rx", CONST_WEAPON_ID_MELEE },
            { R"rx(^(defaultrepairtool)$)rx", CONST_WEAPON_ID_REPAIR_TOOL },
            // Bullet
            { R"rx(^(chaingun)$)rx", CONST_WEAPON_ID_CHAINGUN },
            { R"rx(^(chaincannon)$)rx", CONST_WEAPON_ID_CHAINGUN_MKD },
            { R"rx(^(x1|lmg|x1lmg)$)rx", CONST_WEAPON_ID_RIFLE_ASSAULT_X1 },
            { R"rx(^(plasmacannon|plasma)$)rx", CONST_WEAPON_ID_PLASMA_CANNON },
            { R"rx(^(novacolt|colt|nova)$)rx", CONST_WEAPON_ID_PISTOL_NOVA_SLUG },
            { R"rx(^(mx|novablastermx|novamx|blaster(mx)?)$)rx", CONST_WEAPON_ID_PISTOL_NOVA_COLT_MKD },
            // Short Range
            { R"rx(^(automaticshotgun|autoshotgun|shotgun)$)rx", CONST_WEAPON_ID_SHOTGUN_AUTO },
            { R"rx(^((the)?hammer)$)rx", CONST_WEAPON_ID_SHOTGUN_AUTO_MKD },
            { R"rx(^(efg)$)rx", CONST_WEAPON_ID_ELFFLAK },
            // Belt
            { R"rx(^(fraggrenades?|frags?)$)rx", CONST_WEAPON_ID_GRENADE },
            { R"rx(^(heavyaps?(grenades?)?)$)rx", CONST_WEAPON_ID_GRENADE_AP_HEAVY },
            { R"rx(^(heavyaps?-?xls?(grenades?)?)$)rx", CONST_WEAPON_ID_GRENADE_AP_HEAVY_MKD },
            { R"rx(^(fractals?|fractalgrenades?)$)rx", CONST_WEAPON_ID_GRENADE_SPIKE },
            { R"rx(^(extendedfractals?(grenades?)?)$)rx", CONST_WEAPON_ID_GRENADE_SPIKE_MKD },
            { R"rx(^((heavy|light)sticky(grenades?)?|lightstickies)$)rx", CONST_WEAPON_ID_GRENADE_STICKY_LIGHT },
            { R"rx(^(mines?)$)rx", CONST_WEAPON_ID_MINE },
            { R"rx(^(spinfusordisks?|spinfusordiscs?|spins?|disks?|discs?|spindisks?|spindiscs?)$)rx", CONST_WEAPON_ID_SPINFUSOR_TOSS },
            { R"rx(^(targetingbeacon)$)rx", CONST_WEAPON_ID_TARGETINGBEACON },
        },
    };

    std::map<std::string, int> packs[3] = {
        {
            { R"rx(^(thrust(pack)?)$)rx", CONST_ITEM_PACK_BLINK },
            { R"rx(^((light)?energy(pack)?)$)rx", CONST_ITEM_PACK_RECHARGE_PATHFINDER },
            { R"rx(^(stealth(pack)?)$)rx", CONST_ITEM_PACK_STEALTH },
            { R"rx(^(highspeedstealth(pack)?)$)rx", CONST_ITEM_PACK_HIGHSPEEDSTEALTH },
            { R"rx(^((light)?utility(pack)?)$)rx", CONST_ITEM_PACK_RECHARGE_SENTINEL }
        }, 
        {
            { R"rx(^((light)?turret)$)rx", CONST_WEAPON_ID_TURRET_LIGHT },
            { R"rx(^(dropstation)$)rx", CONST_WEAPON_ID_DROPJAMMER },
            { R"rx(^(shield(pack)?)$)rx", CONST_ITEM_PACK_SHIELD },
            { R"rx(^(energy(pack)?)$)rx", CONST_ITEM_PACK_ENERGY_SOLDIER },
            { R"rx(^(util(ity)?(pack)?)$)rx", CONST_ITEM_PACK_UTILITY_SOLDIER },
            { R"rx(^(jammer(pack)?)$)rx", CONST_ITEM_PACK_JAMMER },
            { R"rx(^(exr(turret)?)$)rx", CONST_WEAPON_ID_TURRET_EXR }
            { R"rx(^(wallturret)$)rx", CONST_WEAPON_ID_TURRET_WALL }
            { R"rx(^(damage(pack)?)$)rx", CONST_ITEM_PACK_DAMAGE }
            { R"rx(^(personalforcefield)$)rx", CONST_WEAPON_ID_FORCEFIELD_PERSONAL }

        }, 
        {
            { R"rx(^(forcefield)$)rx", CONST_WEAPON_ID_FORCEFIELD },
            { R"rx(^((heavy)?energy(pack)?)$)rx", CONST_ITEM_PACK_ENERGY_BRUTE },
            { R"rx(^((heavy)?shield(pack)?)$)rx", CONST_ITEM_PACK_HEAVYSHIELD },
            { R"rx(^((heavy)?(utility|survival)(pack)?)$)rx", CONST_ITEM_PACK_SURVIVAL },
            { R"rx(^((heavy)?energypool(pack)?)$)rx", CONST_ITEM_PACK_ENERGY_JUGGERNAUT },
            { R"rx(^((heavy)?regen(pack)?)$)rx", CONST_ITEM_PACK_REGEN },
        }
    };

    std::map<std::string, int> skins[3] = {
        {
            { R"rx(^(pth|pathfinder|light|lht)$)rx", CONST_ITEM_SKIN_PATHFINDER },
            { R"rx(^(inf|infiltrator)$)rx", CONST_ITEM_SKIN_INFILTRATOR },
            { R"rx(^(sen|sentinel)$)rx", CONST_ITEM_SKIN_SENTINEL },
            { R"rx(^(freerunner)$)rx", CONST_ITEM_SKIN_PATHFINDER_MERC },
            { R"rx(^(mercenary)$)rx", CONST_ITEM_SKIN_INFILTRATOR_MERC },
            { R"rx(^(assassin)$)rx", CONST_ITEM_SKIN_INFILTRATOR_ASSASSIN },
            { R"rx(^(specter|spectre)$)rx", CONST_ITEM_SKIN_SENTINEL_MERC }
        },
        {
            { R"rx(^(sld|soldier|med(ium)?)$)rx", CONST_ITEM_SKIN_SOLDIER },
            { R"rx(^(tcn|technician)$)rx", CONST_ITEM_SKIN_TECHNICIAN },
            { R"rx(^(rdr|raider)$)rx", CONST_ITEM_SKIN_RAIDER },
            { R"rx(^(mercenary)$)rx", CONST_ITEM_SKIN_RAIDER_MERC },
            { R"rx(^(griever)$)rx", CONST_ITEM_SKIN_RAIDER_GRIEVER },
            { R"rx(^(specialist)$)rx", CONST_ITEM_SKIN_TECHNICIAN_MERC },
            { R"rx(^(synthrall)$)rx", CONST_ITEM_SKIN_SOLDIER_MERC }
        },
        {
            { R"rx(^(jug|juggernaut|juggernaught|heavy|hvy)$)rx", CONST_ITEM_SKIN_JUGGERNAUT },
            { R"rx(^(dmb|doombringer)$)rx", CONST_ITEM_SKIN_DOOMBRINGER },
            { R"rx(^(brt|brute)$)rx", CONST_ITEM_SKIN_BRUTE },
            { R"rx(^(crusher)$)rx", CONST_ITEM_SKIN_BRUTE_MERC },
            { R"rx(^(executioner)$)rx", CONST_ITEM_SKIN_DOOMBRINGER_MERC },
            { R"rx(^((the)?forlorn)$)rx", CONST_ITEM_SKIN_JUGGERNAUT_MERC }
        }
    };

    std::map<std::string, int> perks = {
        { R"rx(^(survivalist)$)rx", CONST_ITEM_PERK_SURVIVALIST },
        { R"rx(^(safefall)$)rx", CONST_ITEM_PERK_SAFEFALL },
        { R"rx(^(safetythird)$)rx", CONST_ITEM_PERK_SAFETYTHIRD },
        { R"rx(^(reach)$)rx", CONST_ITEM_PERK_REACH },
        { R"rx(^(wheeldeal)$)rx", CONST_ITEM_PERK_WHEELDEAL },
        { R"rx(^(bountyhunter)$)rx", CONST_ITEM_PERK_BOUNTYHUNTER },
        { R"rx(^(closecombat|cc)$)rx", CONST_ITEM_PERK_CLOSECOMBAT },
        { R"rx(^(stealthy)$)rx", CONST_ITEM_PERK_STEALTHY },
        { R"rx(^(supercapacitor)$)rx", CONST_ITEM_PERK_SUPERCAPACITOR },
        { R"rx(^(ultracapacitor)$)rx", CONST_ITEM_PERK_ULTRACAPACITOR },
        { R"rx(^(ego(centric)?)$)rx", CONST_ITEM_PERK_EGOCENTRIC },
        { R"rx(^(pilot)$)rx", CONST_ITEM_PERK_PILOT },
        { R"rx(^(superheavy)$)rx", CONST_ITEM_PERK_SUPERHEAVY },
        { R"rx(^(quickdraw|qd)$)rx", CONST_ITEM_PERK_QUICKDRAW },
        { R"rx(^(mechanic)$)rx", CONST_ITEM_PERK_MECHANIC },
        { R"rx(^(determination)$)rx", CONST_ITEM_PERK_DETERMINATION },
        { R"rx(^(looter)$)rx", CONST_ITEM_PERK_LOOTER },
        { R"rx(^(potentialenergy)$)rx", CONST_ITEM_PERK_POTENTIALENERGY },
        { R"rx(^(sonicpunch)$)rx", CONST_ITEM_PERK_SONICPUNCH },
        { R"rx(^(rage)$)rx", CONST_ITEM_PERK_RAGE },
        { R"rx(^(lightweight)$)rx", CONST_ITEM_PERK_LIGHTWEIGHT },
    };

    std::map<std::string, int> voices = {
        { R"rx(^(light|lht)$)rx", CONST_ITEM_VOICE_LIGHT },
        { R"rx(^(med(ium)?)$)rx", CONST_ITEM_VOICE_MEDIUM },
        { R"rx(^(heavy|hvy)$)rx", CONST_ITEM_VOICE_HEAVY },
        { R"rx(^(battleworn)$)rx", CONST_ITEM_VOICE_DARK },
        { R"rx(^(femmefatale)$)rx", CONST_ITEM_VOICE_FEM1 },
        { R"rx(^(ms\.?wilderzone)$)rx", CONST_ITEM_VOICE_FEM2 },
        { R"rx(^(diskerdundee|aus(tralian)?)$)rx", CONST_ITEM_VOICE_AUS },
        { R"rx(^(tb|totalbiscuit)$)rx", CONST_ITEM_VOICE_TOTALBISCUIT },
        { R"rx(^(stowaway)$)rx", CONST_ITEM_VOICE_STOWAWAY },
        { R"rx(^(t2(fem(ale)?)?heroine)$)rx", CONST_ITEM_VOICE_T2FEM01 },
        { R"rx(^(t2(fem(ale)?)?pro(fessional)?)$)rx", CONST_ITEM_VOICE_T2FEM02 },
        { R"rx(^(t2(fem(ale)?)?cadet)$)rx", CONST_ITEM_VOICE_T2FEM03 },
        { R"rx(^(t2(fem(ale)?)?veteran)$)rx", CONST_ITEM_VOICE_T2FEM04 },
        { R"rx(^(t2(fem(ale)?)?amazon)$)rx", CONST_ITEM_VOICE_T2FEM05 },
        { R"rx(^(t2(male)?hero)$)rx", CONST_ITEM_VOICE_T2MALE01 },
        { R"rx(^(t2(male)?iceman)$)rx", CONST_ITEM_VOICE_T2MALE02 },
        { R"rx(^(t2(male)?rogue)$)rx", CONST_ITEM_VOICE_T2MALE03 },
        { R"rx(^(t2(male)?hardcase)$)rx", CONST_ITEM_VOICE_T2MALE04 },
        { R"rx(^(t2(male)?psycho)$)rx", CONST_ITEM_VOICE_T2MALE05 },
        { R"rx(^(t2(bioderm)?warrior)$)rx", CONST_ITEM_VOICE_T2BDERM01 },
        { R"rx(^(t2(bioderm)?monster)$)rx", CONST_ITEM_VOICE_T2BDERM02 },
        { R"rx(^(t2(bioderm)?predator)$)rx", CONST_ITEM_VOICE_T2BDERM03 }
    };

    std::map<int, std::string> item_id_to_name = {
        // Melee
        { CONST_WEAPON_ID_MELEE, "Melee" },
        // Default Repair Tool
        { CONST_WEAPON_ID_REPAIR_TOOL, "RepairTool"},


        // Light
        // Impact
        { CONST_WEAPON_ID_SPINFUSOR_LIGHT, "LightSpinfusor" },
        { CONST_WEAPON_ID_LAUNCHER_BOLT, "BoltLauncher" },
        { CONST_WEAPON_ID_SPINFUSOR_LIGHT_MKD, "LightSpinfusor_MKD" },
        { CONST_WEAPON_ID_LIGHTTWINFUSOR, "LightTwinfusor" },
        { CONST_WEAPON_ID_SPINFUSOR_LIGHT_100X, "LightSpinfusor_100X" },
        { CONST_WEAPON_ID_STEALTHLIGHTSPINFUSOR, "StealthLightSpinfusor" },
        // Timed
        { CONST_WEAPON_ID_LIGHTGRENADELAUNCHER, "GrenadeLauncher_Light" },
        { CONST_WEAPON_ID_REMOTE_ARX_BUSTER, "RemoteArxBuster" },
        // Speciality
        { CONST_WEAPON_ID_RIFLE_SNIPER, "SniperRifle" },
        { CONST_WEAPON_ID_RIFLE_PHASE, "PhaseRifle" },
        { CONST_WEAPON_ID_RIFLE_SNIPER_MKD, "SniperRifle_MKD" },
        { CONST_WEAPON_ID_SAP20, "SAP20" },
        // Bullet
        { CONST_WEAPON_ID_PISTOL_FALCON, "Falcon" },
        { CONST_WEAPON_ID_RIFLE_ASSAULT_LIGHT, "LightAssaultRifle" },
        { CONST_WEAPON_ID_PISTOL_SPARROW, "Sparrow" },
        { CONST_WEAPON_ID_THROWINGKNIVES, "ThrowingKnives" },
        { CONST_WEAPON_ID_SMG_RHINO, "RhinoSMG" },
        { CONST_WEAPON_ID_SMG_RHINO_MKD, "RhinoSMG_MKD" },
        { CONST_WEAPON_ID_PISTOL_SN7, "SN7" },
        { CONST_WEAPON_ID_PISTOL_SN7_MKD, "SN7_MKD" },
        // Short Range
        { CONST_WEAPON_ID_SHOTGUN, "Shotgun" },
        { CONST_WEAPON_ID_SHOTGUN_MKD, "Shotgun_MKD" },
        { CONST_WEAPON_ID_ACCURIZEDSHOTGUN, "AccurizedShotgun" },
        { CONST_WEAPON_ID_PISTOL_H1, "H1" },
        // Belt
        { CONST_WEAPON_ID_GRENADE_NITRON, "ConcussionGrenade" },
        { CONST_WEAPON_ID_GRENADE_NITRON_MKD, "ConcussionGrenade_MKD" },
        { CONST_WEAPON_ID_GRENADE_ST, "STGrenade" },
        { CONST_WEAPON_ID_GRENADE_T5 , "GrenadeT5" },
        { CONST_WEAPON_ID_GRENADE_STICKY, "StickyGrenade" },
        { CONST_WEAPON_ID_GRENADE_STICKY_MKD, "StickyGrenade_MKD" },
        { CONST_WEAPON_ID_MINE_CLAYMORE, "Claymore" },
        { CONST_WEAPON_ID_MINE_ARMOREDCLAYMORE, "ArmoredClaymore" },
        { CONST_WEAPON_ID_MINE_PRISM, "PrismMineDeployable" },
        { CONST_WEAPON_ID_GRENADE_NINJASMOKE, "NinjaSmoke" },
        { CONST_WEAPON_ID_IMPACTBOMBLETS, "ImpactBomblets" },
        { CONST_WEAPON_ID_GRENADE_NITRON_HEAVY, "HeavyImpactNitron" },
        // Pack
        { CONST_ITEM_PACK_BLINK, "Blink" },
        { CONST_ITEM_PACK_RECHARGE_PATHFINDER, "ERechargePack_Pathfinder" },
        { CONST_ITEM_PACK_STEALTH, "Stealth" },
        { CONST_ITEM_PACK_RECHARGE_SENTINEL, "ERechargePack_Sentinel" },
        { CONST_ITEM_PACK_HIGHSPEEDSTEALTH, "HighSpeedStealth" },

        // Medium
        // Impact
        { CONST_WEAPON_ID_SPINFUSOR, "Spinfusor" },
        { CONST_WEAPON_ID_THUMPER, "Thumper" },
        { CONST_WEAPON_ID_THUMPER_D, "ThumperD" },
        { CONST_WEAPON_ID_THUMPERD_MKD, "ThumperD_MKD" },
        { CONST_WEAPON_ID_TWINFUSOR, "Twinfusor" },
        { CONST_WEAPON_ID_SPINFUSOR_100X, "Spinfusor_100X" },
        { CONST_WEAPON_ID_HONORFUSOR, "Honorfusor" },
        { CONST_WEAPON_ID_BUCKLER, "Buckler" },
        // Timed
        { CONST_WEAPON_ID_ARX_BUSTER, "ArxBuster" },
        { CONST_WEAPON_ID_ARX_BUSTER_MKD, "ArxBuster_MKD" },
        { CONST_WEAPON_ID_LAUNCHER_GRENADE, "GrenadeLauncher" },
        // Speciality
        { CONST_WEAPON_ID_REPAIR_TOOL_SD, "RepairToolSD" },
        { CONST_WEAPON_ID_REPAIR_TOOL_SD_MKD, "RepairToolSD_MKD" },
        { CONST_WEAPON_ID_ELFPROJECTOR, "ElfProjector" },
        // Bullet
        { CONST_WEAPON_ID_RIFLE_ASSAULT, "AssaultRifle" },
        { CONST_WEAPON_ID_RIFLE_ASSAULT_MKD, "AssaultRifle_MKD" },
        { CONST_WEAPON_ID_SMG_NJ4, "NJ4SMG" },
        { CONST_WEAPON_ID_SMG_NJ4_MKD, "NJ4SMG_MKD" },
        { CONST_WEAPON_ID_NJ5SMG, "NJ5SMG" },
        { CONST_WEAPON_ID_SMG_TCN4, "TCN4SMG" },
        { CONST_WEAPON_ID_SMG_TCN4_MKD, "TCN4SMG_MKD" },
        { CONST_WEAPON_ID_PLASMA_GUN, "PlasmaGun" },
        { CONST_WEAPON_ID_PISTOL_NOVA_COLT, "NovaColt" },
        { CONST_WEAPON_ID_PISTOL_EAGLE, "Eagle" },
        // Short range
        { CONST_WEAPON_ID_SHOTGUN_SAWED_OFF, "SawedOffShotgun" },
        { CONST_WEAPON_ID_TC24, "TC24" },
        { CONST_WEAPON_ID_SHOTGUN_ARX, "ArxShotgun" },
        // Belt
        { CONST_WEAPON_ID_GRENADE_EMP, "EMPGrenade" },
        { CONST_WEAPON_ID_GRENADE_EMP_MKD, "EMPGrenade_MKD" },
        { CONST_WEAPON_ID_GRENADE_WHITEOUT, "WhiteOut" },
        { CONST_WEAPON_ID_MIRV_GRENADE, "MIRVGrenade" },
        { CONST_WEAPON_ID_GRENADE_AP, "APGrenade" },
        { CONST_WEAPON_ID_GRENADE_XL, "GrenadeXL" },
        { CONST_WEAPON_ID_PROXIMITY_GRENADE, "ProximityGrenade" },
        { CONST_WEAPON_ID_GRENADE_XL_MKD, "GrenadeXL_MKD" },
        { CONST_WEAPON_ID_TCNG, "TCNG"  },
        { CONST_WEAPON_ID_TCNG_MKD, "TCNG_MKD" },
        { CONST_WEAPON_ID_MOTIONALARM, "MotionSensorDeployable" },
        { CONST_WEAPON_ID_REPAIR_DEPLOYABLE, "RepairDeployable" },
        { CONST_WEAPON_ID_GRENADE_MKD, "Grenade_MKD" },
        { CONST_WEAPON_ID_GRENADE_FLARE, "FlareGrenade" },
        // Pack
        { CONST_WEAPON_ID_TURRET_LIGHT, "LightTurretDeployable" },
        { CONST_WEAPON_ID_DROPJAMMER, "DropJammerDeployable" },
        { CONST_ITEM_PACK_SHIELD, "ShieldPack" },
        { CONST_ITEM_PACK_ENERGY_SOLDIER, "EnergyPack_Soldier" },
        { CONST_ITEM_PACK_UTILITY_SOLDIER, "UtilityPack_Soldier" },
        { CONST_ITEM_PACK_JAMMER, "JammerPack" },
        { CONST_WEAPON_ID_TURRET_EXR, "AntiAirTurretDeployable" },
        { CONST_WEAPON_ID_TURRET_WALL, "WallTurretDeployable" },
        { CONST_ITEM_PACK_DAMAGE, "DamagePack" },
        { CONST_WEAPON_ID_FORCEFIELD_PERSONAL, "PersonalForceField" },

        // Heavy
        // Impact
        { CONST_WEAPON_ID_SPINFUSOR_D, "SpinfusorD" },
        { CONST_WEAPON_ID_SPINFUSOR_D_MKD, "SpinfusorD_MKD" },
        { CONST_WEAPON_ID_SPINFUSOR_HEAVY, "HeavySpinfusor" },
        { CONST_WEAPON_ID_SPINFUSOR_HEAVY_MKD, "HeavySpinfusor_MKD" },
        { CONST_WEAPON_ID_LAUNCHER_BOLT_HEAVY, "HeavyBoltLauncher" },
        { CONST_WEAPON_ID_HEAVYTWINFUSOR, "HeavyTwinfusor" },
        { CONST_WEAPON_ID_ROCKETLAUNCHER, "RocketLauncher" },
        // Timed
        { CONST_WEAPON_ID_LAUNCHER_MORTAR_MKD, "MortarLauncher_MKD" },
        { CONST_WEAPON_ID_LAUNCHER_MORTAR, "MortarLauncher" },
        { CONST_WEAPON_ID_LAUNCHER_MIRV, "MIRVLauncher" },
        { CONST_WEAPON_ID_LR1MORTAR, "LR1Mortar" },
        // Speciality
        { CONST_WEAPON_ID_LAUNCHER_SABER, "SaberLauncher" },
        { CONST_WEAPON_ID_LAUNCHER_SABER_MKD, "SaberLauncher_MKD" },
        { CONST_WEAPON_ID_SPIKELAUNCHER, "SpikeLauncher" },
        // Bullet
        { CONST_WEAPON_ID_CHAINGUN, "ChainGun" },
        { CONST_WEAPON_ID_CHAINGUN_MKD, "ChainGun_MKD" },
        { CONST_WEAPON_ID_RIFLE_ASSAULT_X1, "X1Rifle" },
        { CONST_WEAPON_ID_PLASMA_CANNON, "PlasmaCannon" },
        { CONST_WEAPON_ID_PISTOL_NOVA_SLUG, "NovaSlug" },
        { CONST_WEAPON_ID_PISTOL_NOVA_COLT_MKD, "NovaColt_MKD" },
        // Short Range
        { CONST_WEAPON_ID_SHOTGUN_AUTO, "AutoShotgun" },
        { CONST_WEAPON_ID_SHOTGUN_AUTO_MKD, "AutoShotgun_MKD" },
        { CONST_WEAPON_ID_ELFFLAK, "ElfFlak" },
        // Belt
        { CONST_WEAPON_ID_GRENADE, "Grenade" },
        { CONST_WEAPON_ID_GRENADE_AP_HEAVY, "HeavyAPGrenade" },
        { CONST_WEAPON_ID_GRENADE_AP_HEAVY_MKD, "HeavyAPGrenade_MKD" },
        { CONST_WEAPON_ID_GRENADE_SPIKE, "SpikeGrenade" },
        { CONST_WEAPON_ID_GRENADE_SPIKE_MKD, "SpikeGrenade_MKD" },
        { CONST_WEAPON_ID_GRENADE_STICKY_LIGHT, "LightStickyGrenade" },
        { CONST_WEAPON_ID_MINE, "Mine" },
        { CONST_WEAPON_ID_SPINFUSOR_TOSS, "DiskToss" },
        { CONST_WEAPON_ID_TARGETINGBEACON, "TargetingBeacon" },
        // Pack
        { CONST_WEAPON_ID_FORCEFIELD, "ForceFieldDeployable" },
        { CONST_ITEM_PACK_ENERGY_BRUTE, "EnergyPack_Brute" },
        { CONST_ITEM_PACK_HEAVYSHIELD, "HeavyShieldPack" },
        { CONST_ITEM_PACK_SURVIVAL, "SurvivalPack" },
        { CONST_ITEM_PACK_ENERGY_JUGGERNAUT, "EnergyPack_Juggernaut" },
        { CONST_ITEM_PACK_REGEN, "RegenPack" },

        // Subdevices
        { CONST_SUBDEVICE_ID_EXR_TURRET, "AntiAirTurret"},
        { CONST_SUBDEVICE_ID_BASE_TURRET, "BaseTurret"},
        { CONST_SUBDEVICE_ID_FORCE_FIELD, "ForceField"},
        { CONST_SUBDEVICE_ID_LIGHT_TURRET, "LightTurret"}, 

        // Perks
        { CONST_ITEM_PERK_SURVIVALIST, "Survivalist" },
        { CONST_ITEM_PERK_SAFEFALL, "SafeFall" },
        { CONST_ITEM_PERK_SAFETYTHIRD, "SafetyThird" },
        { CONST_ITEM_PERK_REACH, "Reach" },
        { CONST_ITEM_PERK_WHEELDEAL, "WheelDeal" },
        { CONST_ITEM_PERK_BOUNTYHUNTER, "BountyHunter" },
        { CONST_ITEM_PERK_CLOSECOMBAT, "CloseCombat" },
        { CONST_ITEM_PERK_STEALTHY, "Stealthy" },
        { CONST_ITEM_PERK_SUPERCAPACITOR, "SuperCapacitor" },
        { CONST_ITEM_PERK_ULTRACAPACITOR, "UltraCapacitor" },
        { CONST_ITEM_PERK_EGOCENTRIC, "Egocentric" },
        { CONST_ITEM_PERK_PILOT, "Pilot" },
        { CONST_ITEM_PERK_SUPERHEAVY, "SuperHeavy" },
        { CONST_ITEM_PERK_QUICKDRAW, "QuickDraw" },
        { CONST_ITEM_PERK_MECHANIC, "Mechanic" },
        { CONST_ITEM_PERK_DETERMINATION, "Determination" },
        { CONST_ITEM_PERK_LOOTER, "Looter" },
        { CONST_ITEM_PERK_POTENTIALENERGY, "PotentialEnergy" },
        { CONST_ITEM_PERK_SONICPUNCH, "SonicPunch" },
        { CONST_ITEM_PERK_RAGE, "Rage" },
        { CONST_ITEM_PERK_LIGHTWEIGHT, "Lightweight" },
    };

    std::map<int, std::string> perk_id_to_name = {
        { CONST_ITEM_PERK_SURVIVALIST, "Survivalist" },
        { CONST_ITEM_PERK_SAFEFALL, "SafeFall" },
        { CONST_ITEM_PERK_SAFETYTHIRD, "SafetyThird" },
        { CONST_ITEM_PERK_REACH, "Reach" },
        { CONST_ITEM_PERK_WHEELDEAL, "WheelDeal" },
        { CONST_ITEM_PERK_BOUNTYHUNTER, "BountyHunter" },
        { CONST_ITEM_PERK_CLOSECOMBAT, "CloseCombat" },
        { CONST_ITEM_PERK_STEALTHY, "Stealthy" },
        { CONST_ITEM_PERK_SUPERCAPACITOR, "SuperCapacitor" },
        { CONST_ITEM_PERK_ULTRACAPACITOR, "UltraCapacitor" },
        { CONST_ITEM_PERK_EGOCENTRIC, "Egocentric" },
        { CONST_ITEM_PERK_PILOT, "Pilot" },
        { CONST_ITEM_PERK_SUPERHEAVY, "SuperHeavy" },
        { CONST_ITEM_PERK_QUICKDRAW, "QuickDraw" },
        { CONST_ITEM_PERK_MECHANIC, "Mechanic" },
        { CONST_ITEM_PERK_DETERMINATION, "Determination" },
        { CONST_ITEM_PERK_LOOTER, "Looter" },
        { CONST_ITEM_PERK_POTENTIALENERGY, "PotentialEnergy" },
        { CONST_ITEM_PERK_SONICPUNCH, "SonicPunch" },
        { CONST_ITEM_PERK_RAGE, "Rage" },
        { CONST_ITEM_PERK_LIGHTWEIGHT, "Lightweight" },
    };

    std::vector<int> perks_by_slot[2] = {
        {
            CONST_ITEM_PERK_SAFEFALL,
            CONST_ITEM_PERK_SAFETYTHIRD,
            CONST_ITEM_PERK_REACH,
            CONST_ITEM_PERK_WHEELDEAL,
            CONST_ITEM_PERK_BOUNTYHUNTER,
            CONST_ITEM_PERK_CLOSECOMBAT,
            CONST_ITEM_PERK_STEALTHY,
            CONST_ITEM_PERK_SUPERCAPACITOR,
            CONST_ITEM_PERK_LOOTER,
            CONST_ITEM_PERK_RAGE,
        },
        {
            CONST_ITEM_PERK_SURVIVALIST,
            CONST_ITEM_PERK_EGOCENTRIC,
            CONST_ITEM_PERK_PILOT,
            CONST_ITEM_PERK_SUPERHEAVY,
            CONST_ITEM_PERK_ULTRACAPACITOR,
            CONST_ITEM_PERK_QUICKDRAW,
            CONST_ITEM_PERK_MECHANIC,
            CONST_ITEM_PERK_DETERMINATION,
            CONST_ITEM_PERK_POTENTIALENERGY,
            CONST_ITEM_PERK_SONICPUNCH,
            CONST_ITEM_PERK_LIGHTWEIGHT,
        }
    };

    std::map<int, std::string> voice_id_to_name = {
        { CONST_ITEM_VOICE_LIGHT, "Light" },
        { CONST_ITEM_VOICE_MEDIUM, " Medium" },
        { CONST_ITEM_VOICE_HEAVY, "Heavy" },
        { CONST_ITEM_VOICE_DARK, "Dark" },
        { CONST_ITEM_VOICE_FEM1, "Fem1" },
        { CONST_ITEM_VOICE_FEM2, "Fem2" },
        { CONST_ITEM_VOICE_AUS, "Aus" },
        { CONST_ITEM_VOICE_TOTALBISCUIT, "TotalBiscuit" },
        { CONST_ITEM_VOICE_STOWAWAY, "Stowaway" },
        { CONST_ITEM_VOICE_BASEMENTCHAMPION, "BasementChampion" },
        { CONST_ITEM_VOICE_T2FEM01, "T2_Fem01" },
        { CONST_ITEM_VOICE_T2FEM02, "T2_Fem02" },
        { CONST_ITEM_VOICE_T2FEM03, "T2_Fem03" },
        { CONST_ITEM_VOICE_T2FEM04, "T2_Fem04" },
        { CONST_ITEM_VOICE_T2FEM05, "T2_Fem05" },
        { CONST_ITEM_VOICE_T2MALE01, "T2_Male01" },
        { CONST_ITEM_VOICE_T2MALE02, "T2_Male02" },
        { CONST_ITEM_VOICE_T2MALE03, "T2_Male03" },
        { CONST_ITEM_VOICE_T2MALE04, "T2_Male04" },
        { CONST_ITEM_VOICE_T2MALE05, "T2_Male05" },
        { CONST_ITEM_VOICE_T2BDERM01, "T2_BioDerm01" },
        { CONST_ITEM_VOICE_T2BDERM02, "T2_BioDerm02" },
        { CONST_ITEM_VOICE_T2BDERM03, "T2_BioDerm03" }
    };

    std::map<int, std::string> weapon_id_to_proj_name = {
        { CONST_WEAPON_ID_MELEE, "" },

        // Light
        { CONST_WEAPON_ID_SPINFUSOR_LIGHT, "LightSpinfusor" },
        { CONST_WEAPON_ID_LAUNCHER_BOLT, "BoltLauncher" },
        { CONST_WEAPON_ID_SPINFUSOR_LIGHT_MKD, "LightSpinfusor_MKD" },
        { CONST_WEAPON_ID_LIGHTTWINFUSOR, "LightTwinfusor" },
        { CONST_WEAPON_ID_SPINFUSOR_LIGHT_100X, "LightSpinfusor_100X" },
        { CONST_WEAPON_ID_SHOTGUN, "" },
        { CONST_WEAPON_ID_RIFLE_ASSAULT_LIGHT, "LightAssaultRifle" },
        { CONST_WEAPON_ID_SHOTGUN_MKD, "" },
        { CONST_WEAPON_ID_RIFLE_SNIPER, "" },
        { CONST_WEAPON_ID_RIFLE_PHASE, "" },
        { CONST_WEAPON_ID_RIFLE_SNIPER_MKD, "" },
        { CONST_WEAPON_ID_SAP20, "" },
        { CONST_WEAPON_ID_PISTOL_NOVA_COLT, "NovaColt" },
        { CONST_WEAPON_ID_PISTOL_FALCON, "Falcon" },
        { CONST_WEAPON_ID_PISTOL_NOVA_COLT_MKD, "NovaColt_MKD" },
        { CONST_WEAPON_ID_ACCURIZEDSHOTGUN, "" },
        { CONST_WEAPON_ID_SMG_RHINO, "RhinoSMG" },
        { CONST_WEAPON_ID_STEALTHLIGHTSPINFUSOR, "StealthSpinfusor" },
        { CONST_WEAPON_ID_REMOTE_ARX_BUSTER, "RemoteArxBuster" },
        { CONST_WEAPON_ID_SMG_RHINO_MKD, "RhinoSMG_MKD" },
        { CONST_WEAPON_ID_PISTOL_SN7, "SN7" },
        { CONST_WEAPON_ID_THROWINGKNIVES, "ThrowingKnives" },
        { CONST_WEAPON_ID_PISTOL_SN7_MKD, "SN7_MKD" },
        { CONST_WEAPON_ID_GRENADE_NITRON, "ConcussionGrenade" },
        { CONST_WEAPON_ID_GRENADE_NITRON_MKD, "ConcussionGrenade_MKD" },
        { CONST_WEAPON_ID_GRENADE_ST, "STGrenade" },
        { CONST_WEAPON_ID_GRENADE_T5 , "GrenadeT5" },
        { CONST_WEAPON_ID_GRENADE_STICKY, "StickyGrenade" },
        { CONST_WEAPON_ID_GRENADE_STICKY_MKD, "StickyGrenade_MKD" },
        { CONST_WEAPON_ID_MINE_CLAYMORE, "Claymore" },
        { CONST_WEAPON_ID_MINE_ARMOREDCLAYMORE, "ArmoredClaymore" },
        { CONST_WEAPON_ID_MINE_PRISM, "PrismMine" },
        { CONST_WEAPON_ID_GRENADE_NINJASMOKE, "NinjaSmoke" },

        // Medium
        { CONST_WEAPON_ID_RIFLE_ASSAULT, "AssaultRifle" },
        { CONST_WEAPON_ID_SPINFUSOR, "Spinfusor" },
        { CONST_WEAPON_ID_RIFLE_ASSAULT_MKD, "AssaultRifle_MKD" },
        { CONST_WEAPON_ID_TWINFUSOR, "Twinfusor" },
        { CONST_WEAPON_ID_THUMPER_D, "ThumperD" },
        { CONST_WEAPON_ID_PISTOL_EAGLE, "Eagle" },
        { CONST_WEAPON_ID_THUMPERD_MKD, "ThumperD_MKD" },
        { CONST_WEAPON_ID_SPINFUSOR_100X, "Spinfusor_100X" },
        { CONST_WEAPON_ID_ARX_BUSTER, "ArxBuster" },
        { CONST_WEAPON_ID_LAUNCHER_GRENADE, "GrenadeLauncher" },
        { CONST_WEAPON_ID_PLASMA_GUN, "PlasmaGun" },
        { CONST_WEAPON_ID_ARX_BUSTER_MKD, "ArxBuster_MKD" },
        { CONST_WEAPON_ID_SMG_NJ4, "NJ4SMG" },
        { CONST_WEAPON_ID_NJ5SMG, "NJ5SMG" },
        { CONST_WEAPON_ID_SMG_NJ4_MKD, "NJ4SMG_MKD" },
        { CONST_WEAPON_ID_SMG_TCN4, "TCN4SMG" },
        { CONST_WEAPON_ID_THUMPER, "Thumper" },
        { CONST_WEAPON_ID_SMG_TCN4_MKD, "TCN4SMG_MKD" },
        { CONST_WEAPON_ID_TC24, "TC24" },
        { CONST_WEAPON_ID_REPAIR_TOOL_SD, "" },
        { CONST_WEAPON_ID_SHOTGUN_SAWED_OFF, "SawedOffShotgun" },
        { CONST_WEAPON_ID_PISTOL_SPARROW, "" },
        { CONST_WEAPON_ID_REPAIR_TOOL_SD_MKD, "" },
        { CONST_WEAPON_ID_GRENADE_EMP, "EMPGrenade" },
        { CONST_WEAPON_ID_GRENADE_EMP_MKD, "EMPGrenade_MKD" },
        { CONST_WEAPON_ID_GRENADE_WHITEOUT, "WhiteOut" },
        { CONST_WEAPON_ID_MIRV_GRENADE, "MIRVGrenade" },
        { CONST_WEAPON_ID_GRENADE_AP, "APGrenade" },
        { CONST_WEAPON_ID_GRENADE_XL, "GrenadeXL" },
        { CONST_WEAPON_ID_PROXIMITY_GRENADE, "ProximityGrenade" },
        { CONST_WEAPON_ID_GRENADE_XL_MKD, "GrenadeXL_MKD" },
        { CONST_WEAPON_ID_TCNG, "TCNG"  },
        { CONST_WEAPON_ID_TCNG_MKD, "TCNG_MKD" },
        { CONST_WEAPON_ID_MOTIONALARM, "MotionSensor" },
        { CONST_WEAPON_ID_REPAIR_DEPLOYABLE, "RepairDeployable" },

        // Heavy
        { CONST_WEAPON_ID_LAUNCHER_MORTAR, "MortarLauncher" },
        { CONST_WEAPON_ID_LAUNCHER_MIRV, "MIRVLauncher" },
        { CONST_WEAPON_ID_LAUNCHER_MORTAR_MKD, "MortarLauncher_MKD" },
        { CONST_WEAPON_ID_SPINFUSOR_D, "SpinfusorD" },
        { CONST_WEAPON_ID_RIFLE_ASSAULT_X1, "X1Rifle" },
        { CONST_WEAPON_ID_SPINFUSOR_D_MKD, "SpinfusorD_MKD" },
        { CONST_WEAPON_ID_HEAVYTWINFUSOR, "HeavyTwinfusor" },
        { CONST_WEAPON_ID_CHAINGUN, "Chaingun" },
        { CONST_WEAPON_ID_LAUNCHER_BOLT_HEAVY, "HeavyBoltLauncher" },
        { CONST_WEAPON_ID_CHAINGUN_MKD, "Chaingun_MKD" },
        { CONST_WEAPON_ID_LAUNCHER_SABER, "TrackingMissile" },
        { CONST_WEAPON_ID_LAUNCHER_SABER_MKD, "TrackingMissile_MKD" },
        { CONST_WEAPON_ID_SPINFUSOR_HEAVY, "HeavySpinfusor" },
        { CONST_WEAPON_ID_SPIKELAUNCHER, "SpikeLauncher" },
        { CONST_WEAPON_ID_SPINFUSOR_HEAVY_MKD, "HeavySpinfusor_MKD" },
        { CONST_WEAPON_ID_SHOTGUN_AUTO, "" },
        { CONST_WEAPON_ID_PLASMA_CANNON, "" },
        { CONST_WEAPON_ID_PISTOL_NOVA_SLUG, "" },
        { CONST_WEAPON_ID_SHOTGUN_AUTO_MKD, "" },
        { CONST_WEAPON_ID_ELFPROJECTOR, "" },
        { CONST_WEAPON_ID_ELFFLAK, "ElfFlak" },
        { CONST_WEAPON_ID_GRENADE,  "Grenade" },
        { CONST_WEAPON_ID_GRENADE_AP_HEAVY, "HeavyAPGrenade" },
        { CONST_WEAPON_ID_GRENADE_AP_HEAVY_MKD, "HeavyAPGrenade_MKD" },
        { CONST_WEAPON_ID_GRENADE_SPIKE, "SpikeGrenade" },
        { CONST_WEAPON_ID_GRENADE_SPIKE_MKD, "SpikeGrenade_MKD" },
        { CONST_WEAPON_ID_GRENADE_STICKY_LIGHT, "LightStickyGrenade" },
        { CONST_WEAPON_ID_MINE, "Mine" },
        { CONST_WEAPON_ID_SPINFUSOR_TOSS, "DiskToss" },

        // Vehicle
        { CONST_WEAPON_ID_PILOT_GRAVCYCLE, "GravCyclePilot" },
        { CONST_WEAPON_ID_PILOT_SHRIKE, "ShrikePilot" },
        { CONST_WEAPON_ID_PILOT_BEOWULF, "BeowulfPilot" },
        { CONST_WEAPON_ID_GUNNER_BEOWULF, "BeowulfGunner" },
        { CONST_WEAPON_ID_PILOT_HAVOC, "HavocPilot" },
        { CONST_WEAPON_ID_PILOT_HERC, "HERCPilot" },
        { CONST_WEAPON_ID_GUNNER_HERC, "HERCGunner" },
    };

    std::map<int, UClass*> weapon_id_to_weapon_class = {
        { CONST_WEAPON_ID_MELEE, ATrDevice_Melee::StaticClass() },
        // Light
        { CONST_WEAPON_ID_SPINFUSOR_LIGHT, ATrDevice_LightSpinfusor::StaticClass() },
        { CONST_WEAPON_ID_LAUNCHER_BOLT, ATrDevice_BoltLauncher::StaticClass() },
        { CONST_WEAPON_ID_SPINFUSOR_LIGHT_MKD, ATrDevice_LightSpinfusor_MKD::StaticClass() },
        { CONST_WEAPON_ID_LIGHTTWINFUSOR, ATrDevice_LightTwinfusor::StaticClass() },
        { CONST_WEAPON_ID_SPINFUSOR_LIGHT_100X, ATrDevice_LightSpinfusor_100X::StaticClass() },
        { CONST_WEAPON_ID_SHOTGUN, ATrDevice_Shotgun::StaticClass() },
        { CONST_WEAPON_ID_RIFLE_ASSAULT_LIGHT, ATrDevice_LightAssaultRifle::StaticClass() },
        { CONST_WEAPON_ID_SHOTGUN_MKD, ATrDevice_Shotgun_MKD::StaticClass() },
        { CONST_WEAPON_ID_RIFLE_SNIPER, ATrDevice_SniperRifle::StaticClass() },
        { CONST_WEAPON_ID_RIFLE_PHASE, ATrDevice_PhaseRifle::StaticClass() },
        { CONST_WEAPON_ID_RIFLE_SNIPER_MKD, ATrDevice_SniperRifle_MKD::StaticClass() },
        { CONST_WEAPON_ID_SAP20, ATrDevice_SAP20::StaticClass() },
        { CONST_WEAPON_ID_PISTOL_NOVA_COLT, ATrDevice_NovaColt::StaticClass() },
        { CONST_WEAPON_ID_PISTOL_FALCON, ATrDevice_Falcon::StaticClass() },
        { CONST_WEAPON_ID_PISTOL_NOVA_COLT_MKD, ATrDevice_NovaColt_MKD::StaticClass() },
        { CONST_WEAPON_ID_ACCURIZEDSHOTGUN, ATrDevice_AccurizedShotgun::StaticClass() },
        { CONST_WEAPON_ID_SMG_RHINO, ATrDevice_RhinoSMG::StaticClass() },
        { CONST_WEAPON_ID_STEALTHLIGHTSPINFUSOR, ATrDevice_StealthLightSpinfusor::StaticClass() },
        { CONST_WEAPON_ID_REMOTE_ARX_BUSTER, ATrDevice_RemoteArxBuster::StaticClass() },
        { CONST_WEAPON_ID_SMG_RHINO_MKD, ATrDevice_RhinoSMG_MKD::StaticClass() },
        { CONST_WEAPON_ID_PISTOL_SN7, ATrDevice_SN7::StaticClass() },
        { CONST_WEAPON_ID_LIGHTGRENADELAUNCHER, ATrDevice_GrenadeLauncher_Light::StaticClass() },
        { CONST_WEAPON_ID_THROWINGKNIVES, ATrDevice_ThrowingKnives::StaticClass() },
        { CONST_WEAPON_ID_PISTOL_SN7_MKD, ATrDevice_SN7_MKD::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_NITRON, ATrDevice_ConcussionGrenade::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_NITRON_MKD, ATrDevice_ConcussionGrenade_MKD::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_ST, ATrDevice_STGrenade::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_T5 , ATrDevice_GrenadeT5::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_STICKY, ATrDevice_StickyGrenade::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_STICKY_MKD, ATrDevice_StickyGrenade_MKD::StaticClass() },
        { CONST_WEAPON_ID_MINE_CLAYMORE, ATrDevice_Claymore::StaticClass() },
        { CONST_WEAPON_ID_MINE_PRISM, ATrDevice_PrismMineDeployable::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_NINJASMOKE, ATrDevice_NinjaSmoke::StaticClass() },
        { CONST_WEAPON_ID_MINE_ARMOREDCLAYMORE, ATrDevice_ArmoredClaymore::StaticClass() },

        // Medium
        { CONST_WEAPON_ID_RIFLE_ASSAULT, ATrDevice_AssaultRifle::StaticClass() },
        { CONST_WEAPON_ID_SPINFUSOR, ATrDevice_Spinfusor::StaticClass() },
        { CONST_WEAPON_ID_RIFLE_ASSAULT_MKD, ATrDevice_AssaultRifle_MKD::StaticClass() },
        { CONST_WEAPON_ID_TWINFUSOR, ATrDevice_Twinfusor::StaticClass() },
        { CONST_WEAPON_ID_THUMPER_D, ATrDevice_ThumperD::StaticClass() },
        { CONST_WEAPON_ID_PISTOL_EAGLE, ATrDevice_Eagle::StaticClass() },
        { CONST_WEAPON_ID_THUMPERD_MKD, ATrDevice_ThumperD_MKD::StaticClass() },
        { CONST_WEAPON_ID_SPINFUSOR_100X, ATrDevice_Spinfusor_100X::StaticClass() },
        { CONST_WEAPON_ID_ARX_BUSTER, ATrDevice_ArxBuster::StaticClass() },
        { CONST_WEAPON_ID_LAUNCHER_GRENADE, ATrDevice_GrenadeLauncher::StaticClass() },
        { CONST_WEAPON_ID_PLASMA_GUN, ATrDevice_PlasmaGun::StaticClass() },
        { CONST_WEAPON_ID_ARX_BUSTER_MKD, ATrDevice_ArxBuster_MKD::StaticClass() },
        { CONST_WEAPON_ID_SMG_NJ4, ATrDevice_NJ4SMG::StaticClass() },
        { CONST_WEAPON_ID_NJ5SMG, ATrDevice_NJ5SMG::StaticClass() },
        { CONST_WEAPON_ID_SMG_NJ4_MKD, ATrDevice_NJ4SMG_MKD::StaticClass() },
        { CONST_WEAPON_ID_SMG_TCN4, ATrDevice_TCN4SMG::StaticClass() },
        { CONST_WEAPON_ID_THUMPER, ATrDevice_Thumper::StaticClass() },
        { CONST_WEAPON_ID_SMG_TCN4_MKD, ATrDevice_TCN4SMG_MKD::StaticClass() },
        { CONST_WEAPON_ID_TC24, ATrDevice_TC24::StaticClass() },
        { CONST_WEAPON_ID_REPAIR_TOOL_SD, ATrDevice_RepairToolSD::StaticClass() },
        { CONST_WEAPON_ID_SHOTGUN_SAWED_OFF, ATrDevice_SawedOffShotgun::StaticClass() },
        { CONST_WEAPON_ID_PISTOL_SPARROW, ATrDevice_Sparrow::StaticClass() },
        { CONST_WEAPON_ID_REPAIR_TOOL_SD_MKD, ATrDevice_RepairToolSD_MKD::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_EMP, ATrDevice_EMPGrenade::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_EMP_MKD, ATrDevice_EMPGrenade_MKD::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_WHITEOUT, ATrDevice_WhiteOut::StaticClass() },
        { CONST_WEAPON_ID_MIRV_GRENADE, ATrDevice_MIRVGrenade::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_AP, ATrDevice_APGrenade::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_XL, ATrDevice_GrenadeXL::StaticClass() },
        { CONST_WEAPON_ID_PROXIMITY_GRENADE, ATrDevice_ProximityGrenade::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_XL_MKD, ATrDevice_GrenadeXL_MKD::StaticClass() },
        { CONST_WEAPON_ID_TCNG, ATrDevice_TCNG::StaticClass() },
        { CONST_WEAPON_ID_TCNG_MKD, ATrDevice_TCNG_MKD::StaticClass() },
        { CONST_WEAPON_ID_MOTIONALARM, ATrDevice_MotionSensorDeployable::StaticClass() },
        { CONST_WEAPON_ID_REPAIR_DEPLOYABLE, ATrDevice_RepairDeployable::StaticClass() },

        // Heavy
        { CONST_WEAPON_ID_LAUNCHER_MORTAR, ATrDevice_MortarLauncher::StaticClass() },
        { CONST_WEAPON_ID_LAUNCHER_MIRV, ATrDevice_MIRVLauncher::StaticClass() },
        { CONST_WEAPON_ID_LAUNCHER_MORTAR_MKD, ATrDevice_MortarLauncher_MKD::StaticClass() },
        { CONST_WEAPON_ID_SPINFUSOR_D, ATrDevice_SpinfusorD::StaticClass() },
        { CONST_WEAPON_ID_RIFLE_ASSAULT_X1, ATrDevice_X1Rifle::StaticClass() },
        { CONST_WEAPON_ID_SPINFUSOR_D_MKD, ATrDevice_SpinfusorD_MKD::StaticClass() },
        { CONST_WEAPON_ID_HEAVYTWINFUSOR, ATrDevice_HeavyTwinfusor::StaticClass() },
        { CONST_WEAPON_ID_CHAINGUN, ATrDevice_ChainGun::StaticClass() },
        { CONST_WEAPON_ID_LAUNCHER_BOLT_HEAVY, ATrDevice_HeavyBoltLauncher::StaticClass() },
        { CONST_WEAPON_ID_CHAINGUN_MKD, ATrDevice_ChainGun_MKD::StaticClass() },
        { CONST_WEAPON_ID_LAUNCHER_SABER, ATrDevice_SaberLauncher::StaticClass() },
        { CONST_WEAPON_ID_LAUNCHER_SABER_MKD, ATrDevice_SaberLauncher_MKD::StaticClass() },
        { CONST_WEAPON_ID_SPINFUSOR_HEAVY, ATrDevice_HeavySpinfusor::StaticClass() },
        { CONST_WEAPON_ID_SPIKELAUNCHER, ATrDevice_SpikeLauncher::StaticClass() },
        { CONST_WEAPON_ID_SPINFUSOR_HEAVY_MKD, ATrDevice_HeavySpinfusor_MKD::StaticClass() },
        { CONST_WEAPON_ID_SHOTGUN_AUTO, ATrDevice_AutoShotgun::StaticClass() },
        { CONST_WEAPON_ID_PLASMA_CANNON, ATrDevice_PlasmaCannon::StaticClass() },
        { CONST_WEAPON_ID_PISTOL_NOVA_SLUG, ATrDevice_NovaSlug::StaticClass() },
        { CONST_WEAPON_ID_SHOTGUN_AUTO_MKD, ATrDevice_AutoShotgun_MKD::StaticClass() },
        { CONST_WEAPON_ID_ELFPROJECTOR, ATrDevice_ElfProjector::StaticClass() },
        { CONST_WEAPON_ID_ELFFLAK, ATrDevice_ElfFlak::StaticClass() },
        { CONST_WEAPON_ID_PILOT_GRAVCYCLE, ATrVehicleWeapon_GravCyclePilot::StaticClass() },
        { CONST_WEAPON_ID_PILOT_SHRIKE, ATrVehicleWeapon_ShrikePilot::StaticClass() },
        { CONST_WEAPON_ID_PILOT_BEOWULF, ATrVehicleWeapon_BeowulfPilot::StaticClass() },
        { CONST_WEAPON_ID_GUNNER_BEOWULF, ATrVehicleWeapon_BeowulfGunner::StaticClass() },
        { CONST_WEAPON_ID_PILOT_HAVOC, ATrVehicleWeapon_HavocPilot::StaticClass() },
        { CONST_WEAPON_ID_PILOT_HERC, ATrVehicleWeapon_HERCPilot::StaticClass() },
        { CONST_WEAPON_ID_GUNNER_HERC, ATrVehicleWeapon_HERCGunner::StaticClass() },
        { CONST_WEAPON_ID_GRENADE,  ATrDevice_Grenade::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_AP_HEAVY, ATrDevice_HeavyAPGrenade::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_AP_HEAVY_MKD, ATrDevice_HeavyAPGrenade_MKD::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_SPIKE, ATrDevice_SpikeGrenade::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_SPIKE_MKD, ATrDevice_SpikeGrenade_MKD::StaticClass() },
        { CONST_WEAPON_ID_GRENADE_STICKY_LIGHT, ATrDevice_LightStickyGrenade::StaticClass() },
        { CONST_WEAPON_ID_MINE, ATrDevice_Mine::StaticClass() },
        { CONST_WEAPON_ID_SPINFUSOR_TOSS, ATrDevice_DiskToss::StaticClass() },
    };

    std::map<std::string, int> vehicle_weapons =
    {
        { R"rx(^(grav(cycle|bike)?)$)rx", CONST_WEAPON_ID_PILOT_GRAVCYCLE },
        { R"rx(^(shrike(pilot)?)$)rx", CONST_WEAPON_ID_PILOT_SHRIKE },
        { R"rx(^(tank|beowulf(cann?on|pilot)?)$)rx", CONST_WEAPON_ID_PILOT_BEOWULF },
        { R"rx(^((tank|beowulf)(gunner|chaingun|chain|gun))$)rx", CONST_WEAPON_ID_GUNNER_BEOWULF },
        { R"rx(^(havoc)$)rx", CONST_WEAPON_ID_PILOT_HAVOC },
        { R"rx(^(herc(cann?on|pilot))$)rx", CONST_WEAPON_ID_PILOT_HERC },
        { R"rx(^(herc(gunner|chaingun|chain|gun))$)rx", CONST_WEAPON_ID_GUNNER_HERC },
    };

    std::map<int, UClass*> vehicle_weapon_id_to_class = {
        {CONST_WEAPON_ID_PILOT_GRAVCYCLE, ATrVehicleWeapon_GravCyclePilot::StaticClass()},
        {CONST_WEAPON_ID_PILOT_SHRIKE, ATrVehicleWeapon_ShrikePilot::StaticClass()},
        {CONST_WEAPON_ID_PILOT_BEOWULF, ATrVehicleWeapon_BeowulfPilot::StaticClass()},
        {CONST_WEAPON_ID_GUNNER_BEOWULF, ATrVehicleWeapon_BeowulfGunner::StaticClass()},
        {CONST_WEAPON_ID_PILOT_HAVOC, ATrVehicleWeapon_HavocPilot::StaticClass()},
        {CONST_WEAPON_ID_PILOT_HERC, ATrVehicleWeapon_HERCPilot::StaticClass()},
        {CONST_WEAPON_ID_GUNNER_HERC, ATrVehicleWeapon_HERCGunner::StaticClass()},
    };

    std::map<int, std::string> vehicle_weapon_id_to_name = {
        {CONST_WEAPON_ID_PILOT_GRAVCYCLE, "GravCyclePilot"},
        {CONST_WEAPON_ID_PILOT_SHRIKE, "ShrikePilot"},
        {CONST_WEAPON_ID_PILOT_BEOWULF, "BeowulfPilot"},
        {CONST_WEAPON_ID_GUNNER_BEOWULF, "BeowulfGunner"},
        {CONST_WEAPON_ID_PILOT_HAVOC, "HavocPilot"},
        {CONST_WEAPON_ID_PILOT_HERC, "HERCPilot"},
        {CONST_WEAPON_ID_GUNNER_HERC, "HERCGunner"},
    };

    std::map<std::string, int> vehicles = {
        { R"rx(^(grav(cycle|bike)?)$)rx", VEHICLE_GravCycle },
        { R"rx(^(shrike)$)rx", VEHICLE_Shrike },
        { R"rx(^(tank|beowulf)$)rx", VEHICLE_Beowulf },
        { R"rx(^(herc)$)rx", VEHICLE_HERC },
        { R"rx(^(havoc)$)rx", VEHICLE_Havoc },
    };

    std::map<int, std::string> vehicle_id_to_name = {
        {VEHICLE_GravCycle, "GravCycle"},
        {VEHICLE_Shrike, "Shrike"},
        {VEHICLE_Beowulf, "Beowulf"},
        {VEHICLE_HERC, "HERC"},
        {VEHICLE_Havoc, "Havoc"},
    };

    std::map<int, UClass*> vehicle_id_to_class = {
        {VEHICLE_GravCycle, ATrVehicle_GravCycle::StaticClass()},
        {VEHICLE_Shrike, ATrVehicle_Shrike::StaticClass()},
        {VEHICLE_Beowulf, ATrVehicle_Beowulf::StaticClass()},
        {VEHICLE_HERC, ATrVehicle_HERC::StaticClass()},
        {VEHICLE_Havoc, ATrVehicle_Havoc::StaticClass()},
    };

    std::map<std::string, int> classes =
    {
        { R"rx(^(light|lht)$)rx", 1 },
        { R"rx(^(medium|med)$)rx", 2 },
        { R"rx(^(heavy|hvy)$)rx", 3 }
    };

    std::map<std::string, int> armor_class_to_id =
    {
        // GOTY classes
        // Light
        { R"rx(^(light|lht|pathfinder|pth)$)rx", CONST_CLASS_TYPE_LIGHT_PATHFINDER },
        { R"rx(^(sentinel|sen)$)rx", CONST_CLASS_TYPE_LIGHT_SENTINEL },
        { R"rx(^(infiltrator|inf)$)rx", CONST_CLASS_TYPE_LIGHT_INFILTRATOR },
        // Medium
        { R"rx(^(medium|med|soldier|sld)$)rx", CONST_CLASS_TYPE_MEDIUM_SOLDIER },
        { R"rx(^(raider|rdr)$)rx", CONST_CLASS_TYPE_MEDIUM_RAIDER },
        { R"rx(^(technician|tcn)$)rx", CONST_CLASS_TYPE_MEDIUM_TECHNICIAN },
        // Heavy
        { R"rx(^(heavy|hvy|juggernaught|juggernaut|jug)$)rx", CONST_CLASS_TYPE_HEAVY_JUGGERNAUGHT },
        { R"rx(^(doombringer|dmb)$)rx", CONST_CLASS_TYPE_HEAVY_DOOMBRINGER },
        { R"rx(^(brute|brt)$)rx", CONST_CLASS_TYPE_HEAVY_BRUTE },

        // Older removed classes
        // Light
        { R"rx(^(architect)$)rx", CONST_CLASS_TYPE_LIGHT_ARCHITECT },
        { R"rx(^(jumper)$)rx", CONST_CLASS_TYPE_LIGHT_JUMPER },
        { R"rx(^(wraith)$)rx", CONST_CLASS_TYPE_LIGHT_WRAITH },
        // Medium
        { R"rx(^(ranger)$)rx", CONST_CLASS_TYPE_MEDIUM_RANGER },
        { R"rx(^(scrambler)$)rx", CONST_CLASS_TYPE_MEDIUM_SCRAMBLER },
        { R"rx(^(engineer)$)rx", CONST_CLASS_TYPE_MEDIUM_ENGINEER },
        { R"rx(^(warder)$)rx", CONST_CLASS_TYPE_MEDIUM_WARDER },
        // Heavy
        { R"rx(^(marauder)$)rx", CONST_CLASS_TYPE_HEAVY_MARAUDER },
        { R"rx(^(rook)$)rx", CONST_CLASS_TYPE_HEAVY_ROOK },
    };

    std::map<int, std::string> armor_class_id_to_name =
    {
        // GOTY classes
        // Light
        { CONST_CLASS_TYPE_LIGHT_PATHFINDER, "Light_Pathfinder" },
        { CONST_CLASS_TYPE_LIGHT_SENTINEL, "Light_Sentinel" },
        { CONST_CLASS_TYPE_LIGHT_INFILTRATOR, "Light_Infiltrator" },
        // Medium
        { CONST_CLASS_TYPE_MEDIUM_SOLDIER, "Medium_Soldier" },
        { CONST_CLASS_TYPE_MEDIUM_RAIDER, "Medium_Raider" },
        { CONST_CLASS_TYPE_MEDIUM_TECHNICIAN, "Medium_Technician" },
        // Heavy
        { CONST_CLASS_TYPE_HEAVY_JUGGERNAUGHT, "Heavy_Juggernaught" },
        { CONST_CLASS_TYPE_HEAVY_DOOMBRINGER, "Heavy_Doombringer" },
        { CONST_CLASS_TYPE_HEAVY_BRUTE, "Heavy_Brute" },

        // Older removed classes
        // Light
        { CONST_CLASS_TYPE_LIGHT_ARCHITECT, "Light_Architect" },
        { CONST_CLASS_TYPE_LIGHT_JUMPER, "Light_Jumper" },
        { CONST_CLASS_TYPE_LIGHT_WRAITH, "Light_Wraith" },
        // Medium
        { CONST_CLASS_TYPE_MEDIUM_RANGER, "Medium_Ranger" },
        { CONST_CLASS_TYPE_MEDIUM_SCRAMBLER, "Medium_Scrambler" },
        { CONST_CLASS_TYPE_MEDIUM_ENGINEER, "Medium_Engineer" },
        { CONST_CLASS_TYPE_MEDIUM_WARDER, "Medium_Warder" },
        // Heavy
        { CONST_CLASS_TYPE_HEAVY_MARAUDER, "Heavy_Marauder" },
        { CONST_CLASS_TYPE_HEAVY_ROOK, "Heavy_Rook" },
    };

    std::map<int, std::string> armor_class_id_to_armor_mod_name = {
        // GOTY classes
        // Light
        { CONST_CLASS_TYPE_LIGHT_PATHFINDER, "Pathfinder" },
        { CONST_CLASS_TYPE_LIGHT_SENTINEL, "Sentinel" },
        { CONST_CLASS_TYPE_LIGHT_INFILTRATOR, "Infiltrator" },
        // Medium
        { CONST_CLASS_TYPE_MEDIUM_SOLDIER, "Soldier" },
        { CONST_CLASS_TYPE_MEDIUM_RAIDER, "Raider" },
        { CONST_CLASS_TYPE_MEDIUM_TECHNICIAN, "Technician" },
        // Heavy
        // HiRez couldn't decide if it was "Juggernaught" or "Juggernaut"
        { CONST_CLASS_TYPE_HEAVY_JUGGERNAUGHT, "Juggernaut" },
        { CONST_CLASS_TYPE_HEAVY_DOOMBRINGER, "Doombringer" },
        { CONST_CLASS_TYPE_HEAVY_BRUTE, "Brute" },

        // Older removed classes (don't have actual armor mods
        // Light
        { CONST_CLASS_TYPE_LIGHT_ARCHITECT, "Infiltrator" },
        { CONST_CLASS_TYPE_LIGHT_JUMPER, "Pathfinder" },
        { CONST_CLASS_TYPE_LIGHT_WRAITH, "Sentinel" },
        // Medium
        { CONST_CLASS_TYPE_MEDIUM_RANGER, "Soldier" },
        { CONST_CLASS_TYPE_MEDIUM_SCRAMBLER, "Raider" },
        { CONST_CLASS_TYPE_MEDIUM_ENGINEER, "Technician" },
        { CONST_CLASS_TYPE_MEDIUM_WARDER, "Soldier" },
        // Heavy
        { CONST_CLASS_TYPE_HEAVY_MARAUDER, "Brute" },
        { CONST_CLASS_TYPE_HEAVY_ROOK, "Doombringer" },
    };

    std::map<std::string, int> value_mod_types = {
        { "None", CONST_MOD_TYPE_NONE },
        { "HealthBuff", CONST_MOD_TYPE_HEALTH },
        { "MassBuff", CONST_MOD_TYPE_MASSPCT },
        { "RadarLink", CONST_MOD_TYPE_RADARLINK },
        { "Reach", CONST_MOD_TYPE_FLAGREACH },
        { "BuildTimeBuff", CONST_MOD_TYPE_BUILDUPPCT },
        { "Clothesline", CONST_MOD_TYPE_CLOTHESLINE },
        { "StickyHands", CONST_MOD_TYPE_STICKYHANDS },
        { "MaxSkiSpeed", CONST_MOD_TYPE_MAXSKISPEED },
        { "EnergyBuff", CONST_MOD_TYPE_EXTRAENERGY },
        { "EjectionSeat", CONST_MOD_TYPE_EJECTIONSEAT },
            { "Pilot", CONST_MOD_TYPE_EJECTIONSEAT },
        { "SelfDamageReduction", CONST_MOD_TYPE_SELFDAMAGEPCT },
            { "Egocentric", CONST_MOD_TYPE_SELFDAMAGEPCT },
        { "RepairRateBuff", CONST_MOD_TYPE_REPAIRRATEPCT },
        { "ExtraMines", CONST_MOD_TYPE_EXTRAMINESOUT },
        { "VehicleHealthBuff", CONST_MOD_TYPE_VEHICLEEXTRAHEALTH },
        { "WalkSpeedBuff", CONST_MOD_TYPE_GROUNDSPEEDPCT },
        { "EnergyDrainBuff", CONST_MOD_TYPE_ENERGYDRAINPCT },
        { "UpgradeCostReduction", CONST_MOD_TYPE_UPGRADECOSTPCT },
        { "TrapDetection", CONST_MOD_TYPE_CANDETECTTRAPS },
        { "FallDamageReduction", CONST_MOD_TYPE_SPLATDAMAGEPCT },
            { "SafeFall", CONST_MOD_TYPE_SPLATDAMAGEPCT },
        { "QuickDraw", CONST_MOD_TYPE_WEAPONSWITCHPCT },
        { "PotentialEnergy", CONST_MOD_TYPE_POTENTIALENERGY },
        { "MaxJetSpeed", CONST_MOD_TYPE_MAXJETTINGSPEED },
        { "CreditsFromKillsBuff", CONST_MOD_TYPE_CREDITSFROMKILLS },
        { "TerminalSkiSpeed", CONST_MOD_TYPE_TERMINALSKISPEED },
        { "MaxSkiControl", CONST_MOD_TYPE_MAXSKICONTROLPCT },
        { "Determination", CONST_MOD_TYPE_HASDETERMINATION },
        { "DeployableHealthBuff", CONST_MOD_TYPE_DEPLOYABLEHEALTH },
        { "ExtraBeltAmmo", CONST_MOD_TYPE_EXTRAOFFHANDAMMO },
            { "SafetyThird", CONST_MOD_TYPE_EXTRAOFFHANDAMMO },
        { "ExtraPrimaryAmmo", CONST_MOD_TYPE_EXTRAPRIMARYAMMO },
        { "PrimaryReloadTimeBuff", CONST_MOD_TYPE_PRIMARYRELOADPCT },
        { "SensorDetectionReduction", CONST_MOD_TYPE_SENSORDISTANCEPCT },
            { "Stealthy", CONST_MOD_TYPE_SENSORDISTANCEPCT },
        { "ThrustPackCostReduction", CONST_MOD_TYPE_PACKENERGYCOSTPCT },
        { "AmmoPickupBuff", CONST_MOD_TYPE_AMMOFROMPICKUPPCT },
        { "EnergyRegenTimeReduction", CONST_MOD_TYPE_TIMETOREGENENERGY },
        { "SecondaryReloadTimeBuff", CONST_MOD_TYPE_SECONDARYRELOADPCT },
        { "ExtraSecondaryAmmo", CONST_MOD_TYPE_EXTRASECONDARYAMMO },
        { "EnergyRegenRateBuff", CONST_MOD_TYPE_ENERGYREGENRATEPCT },
        { "HealthRegenRateBuff", CONST_MOD_TYPE_HEALTHREGENRATEPCT },
        { "DeployableRangeBuff", CONST_MOD_TYPE_DEPLOYABLERANGEPCT },
        { "JammerPackRadiusBuff", CONST_MOD_TYPE_JAMMERPACKRADIUSPCT },
        { "ThrustPackPowerBuff", CONST_MOD_TYPE_BLINKPACKPOTENCYPCT },
        { "PeakSkiControlSpeed", CONST_MOD_TYPE_PEAKSKICONTROLSPEED },
        { "CanCallInSupplyDrop", CONST_MOD_TYPE_CANCALLINSUPPLYDROP },
        { "ExtraDeployables", CONST_MOD_TYPE_EXTRADEPLOYABLESOUT },
        { "PickupHealthBuff", CONST_MOD_TYPE_HEALTHFROMPICKUPPCT },
            { "SurvivalistHealth", CONST_MOD_TYPE_HEALTHFROMPICKUPPCT },
        { "PickupEnergyBuff", CONST_MOD_TYPE_ENERGYFROMPICKUPPCT },
            { "SurvivalistEnergy", CONST_MOD_TYPE_ENERGYFROMPICKUPPCT },
        { "TerminalJetSpeed", CONST_MOD_TYPE_TERMINALJETTINGSPEED },
        { "RegenTimeBuff", CONST_MOD_TYPE_TIMETOREGENHEALTHPCT },
        { "VehicleCostReduction", CONST_MOD_TYPE_VEHICLECOSTPCT },
        { "SkiControlVariance", CONST_MOD_TYPE_SKICONTROLSIGMASQUARE },
        { "MeleeDamageReduction", CONST_MOD_TYPE_RECEIVEMELEEDAMAGEPCT },
            { "CloseCombat", CONST_MOD_TYPE_RECEIVEMELEEDAMAGEPCT },
        { "MeleeCausesFlagDrop", CONST_MOD_TYPE_VICTIMDROPFLAGONMELEE },
            { "SonicPunchFlagDrop", CONST_MOD_TYPE_VICTIMDROPFLAGONMELEE },
            { "ConcussiveMelee", CONST_MOD_TYPE_VICTIMDROPFLAGONMELEE },
        { "PrimaryRangeBugg", CONST_MOD_TYPE_PRIMARYWEAPONRANGEPCT },
        { "BeltDamageRadiusBuff", CONST_MOD_TYPE_OFFHANDDAMAGERADIUSPCT },
        { "TurretTargetAcquisitionBuff", CONST_MOD_TYPE_TURRETACQUIRETARGETPCT },
        { "BlackoutLengthReduction", CONST_MOD_TYPE_WHITEOUTINTERPSPEEDPCT },
        { "BackstabMeleeBuff", CONST_MOD_TYPE_BACKSTABMELEEDAMAGEPCT },
        { "StoppingDistanceBuff", CONST_MOD_TYPE_MAXSTOPPINGDISTANCEPCT },
        { "SecondaryRangeBuff", CONST_MOD_TYPE_SECONDARYWEAPONRANGEPCT },
        { "BeltPickupBuff", CONST_MOD_TYPE_EXTRAGRENADESFROMPICKUP },
        { "ShieldPackBuff", CONST_MOD_TYPE_SHIELDPACKEFFECTIVENESS },
        { "StealthPackEntryTimeReduction", CONST_MOD_TYPE_STEALTHPACKPULSETIMEPCT },
        { "PrimaryClipSizeBuff", CONST_MOD_TYPE_PRIMARYINCREASEDCLIPSIZE },
        { "BeltKillCreditsBuff", CONST_MOD_TYPE_EXTRACREDITSFROMBELTKILLS },
        { "TurretArmorPenetrationBuff", CONST_MOD_TYPE_TURRETARMORPENETRATIONPCT },
        { "SecondaryClipSizeBuff", CONST_MOD_TYPE_SECONDARYINCREASEDCLIPSIZE },
        { "BeltArmorPenetrationBuff", CONST_MOD_TYPE_OFFHANDARMORPENETRATIONPCT },
        { "PrimaryArmorPenetrationBuff", CONST_MOD_TYPE_PRIMARYARMORPENETRATIONPCT },
        { "RunoverDamageReduction", CONST_MOD_TYPE_RUNOVERDAMAGEPROTECTIONPCT },
            { "SafeFallRunover", CONST_MOD_TYPE_RUNOVERDAMAGEPROTECTIONPCT },
        { "PrimaryEnergyCostReduction", CONST_MOD_TYPE_PRIMARYWEAPONENERGYCOSTPCT },
        { "AcquisitionTimeByEnemyTurretsBuff", CONST_MOD_TYPE_ACQUIRETIMEBYENEMYTURRETPCT },
            { "StealthyTurrets", CONST_MOD_TYPE_ACQUIRETIMEBYENEMYTURRETPCT },
        { "SecondaryArmorPenetrationBuff", CONST_MOD_TYPE_SECONDARYARMORPENETRATIONPCT },
        { "VehicleEnergyBuff", CONST_MOD_TYPE_VEHICLEEXTRAENERGY },
        { "ReachOnPickups", CONST_MOD_TYPE_AMMOPICKUPREACH },
        { "VehiclePassengerDamageReductionBuff", CONST_MOD_TYPE_VEHICLEPASSENGERDMGPROTPCT },
        { "RepairToolDamagesEnemyObjectives", CONST_MOD_TYPE_DAMAGEREPAIRENEMYOBJECTIVES },
        { "PotentialEnergyOnFallDamage", CONST_MOD_TYPE_POTENTIALENERGYFALLDAMAGE },
        { "BeltThrowSpeedBuff", CONST_MOD_TYPE_FASTERTHROWBELTBUFFPCT },
        { "IgnoreGrenadeEffectsOnSelf", CONST_MOD_TYPE_IGNOREGRENADESECONDARYONSELF },
        { "PotentialEnergyDamageTransferBuff", CONST_MOD_TYPE_POTENTIALENERGYDMGTRANSFERPCT },
        { "ReachTier", CONST_MOD_TYPE_FLAGREACHTIER },
        { "SonicPunch", CONST_MOD_TYPE_SONICPUNCH },
        { "SonicPunchRange", CONST_MOD_TYPE_SONICPUNCHDIST },
        { "SonicPunchKnockback", CONST_MOD_TYPE_SONICPUNCHKNOCKBACK },
        { "Rage", CONST_MOD_TYPE_RAGE },
        { "RageEnergyRegen", CONST_MOD_TYPE_RAGEENERGYREGEN },
        { "RageTime", CONST_MOD_TYPE_RAGETIMELENGTH },
        { "RageHealthRestoration", CONST_MOD_TYPE_RAGEHEALTHRESTOREPCT },
        { "StealthPackPulseIgnoreTime", CONST_MOD_TYPE_IGNOREPULSESTEALTHTIME },
        { "RageMassReduction", CONST_MOD_TYPE_RAGEMASSREDUCTION },
        { "DeployableRepairRateBuff", CONST_MOD_TYPE_REPAIRDEPLOYABLERATEPCT },
        { "ShocklanceEnergyCost", CONST_MOD_TYPE_SHOCKLANCEENERGYCOSTPCT },
        { "ExtraAmmoSpawnBuff", CONST_MOD_TYPE_EXTRAAMMOSPAWNPCT },
    };

    std::map<std::string, int> crosshairs =
    {
        { R"rx(^(spin(fusor)?)$)rx", CONST_THR_SPINFUSOR },
        { R"rx(^(smg)$)rx", CONST_THR_SMG },
        { R"rx(^(rifle)$)rx", CONST_THR_RIFLE },
        { R"rx(^(locked_?on)$)rx", CONST_THR_LOCKED_ON },
        { R"rx(^(crossbow)$)rx", CONST_THR_CROSSBOW },
        { R"rx(^(flamethrower)$)rx", CONST_THR_FLAME_THROWER },
        { R"rx(^(chaingun)$)rx", CONST_THR_CHAIN_GUN },
        { R"rx(^(bolt(launcher)?|thumper|missile)$)rx", CONST_THR_MISSILE },
        { R"rx(^(nanite)$)rx", CONST_THR_NANITE },
        { R"rx(^(shotgun)$)rx", CONST_THR_SHOTGUN },
        { R"rx(^(unknown)$)rx", CONST_THR_UNKNOWN },
        { R"rx(^(laser)$)rx", CONST_THR_LASER },
        { R"rx(^(ch_?v13)$)rx", CONST_THR_CH_V13 },
        { R"rx(^(scope)$)rx", CONST_THR_SCOPE },
        { R"rx(^(standard|(nova)?(colt|blaster)?)$)rx", CONST_THR_STANDARD },
        { R"rx(^(grenadelauncher|mortar)$)rx", CONST_THR_GRENADE_LAUNCHER },
        { R"rx(^(melee)$)rx", CONST_THR_MELEE },
        { R"rx(^(shrike)$)rx", CONST_THR_SHRIKE },
        { R"rx(^(spectator)$)rx", CONST_THR_FREE_SPECTATOR },
        { R"rx(^(chain|dot|assaultrifle|ar|red_?dot)$)rx", CONST_THR_RED_DOT },
        { R"rx(^(bxt1?)$)rx", CONST_THR_BXT1 },
        { R"rx(^(phase(rifle)?)$)rx", CONST_THR_PHASERIFLE },
        { R"rx(^(sap(20)?)$)rx", CONST_THR_SAP20 },
        { R"rx(^(plasma(gun)?)$)rx", CONST_THR_PLASMAGUN }
    };

    int classes_id[3] = {
        CONST_CLASS_TYPE_LIGHT,
        CONST_CLASS_TYPE_MEDIUM,
        CONST_CLASS_TYPE_HEAVY
    };

    std::map<int, std::string> class_id_to_name = {
        {CONST_CLASS_TYPE_LIGHT, "Light_Pathfinder"},
        {CONST_CLASS_TYPE_MEDIUM, "Medium_Soldier"},
        {CONST_CLASS_TYPE_HEAVY, "Heavy_Juggernaught"},
    };

    std::map<int, UClass*> class_id_to_class = {
        {CONST_CLASS_TYPE_LIGHT_PATHFINDER, UTrFamilyInfo_Light_Pathfinder::StaticClass()},
        {CONST_CLASS_TYPE_LIGHT_SENTINEL, UTrFamilyInfo_Light_Sentinel::StaticClass()},
        {CONST_CLASS_TYPE_LIGHT_INFILTRATOR, UTrFamilyInfo_Light_Infiltrator::StaticClass()},
        {CONST_CLASS_TYPE_MEDIUM_SOLDIER, UTrFamilyInfo_Medium_Soldier::StaticClass()},
        {CONST_CLASS_TYPE_MEDIUM_RAIDER, UTrFamilyInfo_Medium_Raider::StaticClass()},
        {CONST_CLASS_TYPE_MEDIUM_TECHNICIAN, UTrFamilyInfo_Medium_Technician::StaticClass()},
        {CONST_CLASS_TYPE_HEAVY_JUGGERNAUGHT, UTrFamilyInfo_Heavy_Juggernaught::StaticClass()},
        {CONST_CLASS_TYPE_HEAVY_DOOMBRINGER, UTrFamilyInfo_Heavy_Doombringer::StaticClass()},
        {CONST_CLASS_TYPE_HEAVY_BRUTE, UTrFamilyInfo_Heavy_Brute::StaticClass()},
    };

    std::map<int, int> class_id_to_nb =
    {
        { CONST_CLASS_TYPE_LIGHT, 0 },
        { CONST_CLASS_TYPE_MEDIUM, 1 },
        { CONST_CLASS_TYPE_HEAVY, 2 }
    };

    std::string class_type_name[] =
    {
        "Light",
        "Medium",
        "Heavy"
    };

    std::string equip_type_name[] =
    {
        "Impact",
        "Timed",
        "Specialty",
        "Automatic",
        "Short Range",
        "Sidearm",
        "Belt",
        "Pack"
    };

    std::map<std::string, int> map_id = {
        { R"rx(^arena[-_]?a.*$)rx",                     CONST_MAP_ID_ARENA_AIRARENA },
        { R"rx(^arena[-_]?(f|to).*$)rx",                CONST_MAP_ID_ARENA_FRAYTOWN },
        { R"rx(^arena[-_]?(h|lan).*$)rx",               CONST_MAP_ID_ARENA_HINTERLANDS },
        { R"rx(^arena[-_]?(lav|lar).*$)rx",             CONST_MAP_ID_ARENA_LAVAARENA },
        { R"rx(^arena[-_]?(u|cr).*$)rx",                CONST_MAP_ID_ARENA_UNDERCROFT },
        { R"rx(^arena[-_]?(wi|wa|in).*$)rx",            CONST_MAP_ID_ARENA_WALLEDIN },
        { R"rx(^arena[-_]?(wo|wh|ou).*$)rx",            CONST_MAP_ID_ARENA_WHITEOUT },

        { R"rx(^blitz[-_]?(a|no).*$)rx",                CONST_MAP_ID_BLITZ_ARXNOVENA },
        { R"rx(^blitz[-_]?(b[eo]|om).*$)rx",            CONST_MAP_ID_BLITZ_BELLAOMEGA },
        { R"rx(^blitz[-_]?(b[ls]|sh).*$)rx",            CONST_MAP_ID_BLITZ_BLUESHIFT },
        { R"rx(^blitz[-_]?(ccr?|ca|cru|c?re).*$)rx",    CONST_MAP_ID_BLITZ_CANYONCRUSADEREVIVAL },
        { R"rx(^blitz[-_]?(cf|x|cro|fi).*$)rx",         CONST_MAP_ID_BLITZ_CROSSFIRE },
        { R"rx(^blitz[-_]?d.*$)rx",                     CONST_MAP_ID_BLITZ_DRYDOCK },
        { R"rx(^blitz[-_]?h.*$)rx",                     CONST_MAP_ID_BLITZ_HELLFIRE },
        { R"rx(^blitz[-_]?(k|ba).*$)rx",                CONST_MAP_ID_BLITZ_KATABATIC },

        { R"rx(^cah[-_]?(c[^o]|re).*$)rx",              CONST_MAP_ID_CAH_CANYONCRUSADEREVIVAL },
        { R"rx(^cah[-_]?(d[^a]|ni).*$)rx",              CONST_MAP_ID_CAH_DRYDOCKNIGHT },
        { R"rx(^cah[-_]?(k|ba).*$)rx",                  CONST_MAP_ID_CAH_KATABATIC },
        { R"rx(^cah[-_]?(3|o|sk).*$)rx",                CONST_MAP_ID_CAH_OUTSKIRTS3P },
        { R"rx(^cah[-_]?(r[^eu]|da).*$)rx",             CONST_MAP_ID_CAH_RAINDANCE },
        { R"rx(^cah[-_]?(s[^k]|co).*$)rx",              CONST_MAP_ID_CAH_SULFURCOVE },
        { R"rx(^cah[-_]?(t|ru).*$)rx",                  CONST_MAP_ID_CAH_TARTARUS },

        { R"rx(^ctf[-_]?(a|no).*$)rx",                  CONST_MAP_ID_CTF_ARXNOVENA },
        { R"rx(^ctf[-_]?(be|bo|bella|b?omega)+$)rx",    CONST_MAP_ID_CTF_BELLAOMEGA },
        { R"rx(^ctf[-_]?(be|bo|bella|b?omega)+n.*$)rx", CONST_MAP_ID_CTF_BELLAOMEGANS },
        { R"rx(^ctf[-_]?(bl|bs|shi).*$)rx",             CONST_MAP_ID_CTF_BLUESHIFT },
        { R"rx(^ctf[-_]?(ccr?|ca|cru|re).*$)rx",        CONST_MAP_ID_CTF_CANYONCRUSADEREVIVAL },
        { R"rx(^ctf[-_]?(cf|x|cro|fi).*$)rx",           CONST_MAP_ID_CTF_CROSSFIRE },
        { R"rx(^ctf[-_]?(dx|dc|dang).*$)rx",            CONST_MAP_ID_CTF_DANGEROUSCROSSING },
        { R"rx(^ctf[-_]?(dd|dr|do).*$)rx",              CONST_MAP_ID_CTF_DRYDOCK },
        { R"rx(^ctf[-_]?h.*$)rx",                       CONST_MAP_ID_CTF_HELLFIRE },
        { R"rx(^ctf[-_]?(i|co|to).*$)rx",               CONST_MAP_ID_CTF_ICECOASTER },
        { R"rx(^ctf[-_]?(k|ba).*$)rx",                  CONST_MAP_ID_CTF_KATABATIC },
        { R"rx(^ctf[-_]?(pd|perd).*$)rx",               CONST_MAP_ID_CTF_PERDITION },
        { R"rx(^ctf[-_]?(pf|perm|fr).*$)rx",            CONST_MAP_ID_CTF_PERMAFROST },
        { R"rx(^ctf[-_]?(r[^eu]|danc).*$)rx",           CONST_MAP_ID_CTF_RAINDANCE },
        { R"rx(^ctf[-_]?(sh[^i]|st[^a]).*$)rx",         CONST_MAP_ID_CTF_STONEHENGE },
        { R"rx(^ctf[-_]?(ss|su|sta).*$)rx",             CONST_MAP_ID_CTF_SUNSTAR },
        { R"rx(^ctf[-_]?(ta|tt|rus).*$)rx",             CONST_MAP_ID_CTF_TARTARUS },
        { R"rx(^ctf[-_]?(tem|tr|rui).*$)rx",            CONST_MAP_ID_CTF_TEMPLERUINS },
        { R"rx(^ctf[-_]?(ter|tm|mi|nu).*$)rx",          CONST_MAP_ID_CTF_TERMINUS },

        { R"rx(^rabbit[-_]?(cr|x|c?fi).*$)rx",          CONST_MAP_ID_RABBIT_CROSSFIRE },
        { R"rx(^rabbit[-_]?(i|fe).*$)rx",               CONST_MAP_ID_RABBIT_INFERNO },
        { R"rx(^rabbit[-_]?(k|n|ba).*$)rx",             CONST_MAP_ID_RABBIT_NIGHTABATIC },
        { R"rx(^rabbit[-_]?(o|sk).*$)rx",               CONST_MAP_ID_RABBIT_OUTSKIRTS },
        { R"rx(^rabbit[-_]?(q|sa).*$)rx",               CONST_MAP_ID_RABBIT_QUICKSAND },
        { R"rx(^rabbit[-_]?(sc|su|co).*$)rx",           CONST_MAP_ID_RABBIT_SULFURCOVE },

        { R"rx(^tdm[-_]?(cr|x|c?fi).*$)rx",             CONST_MAP_ID_TDM_CROSSFIRE },
        { R"rx(^tdm[-_]?d.*$)rx",                       CONST_MAP_ID_TDM_DRYDOCKNIGHT },
        { R"rx(^tdm[-_]?(i|fe).*$)rx",                  CONST_MAP_ID_TDM_INFERNO },
        { R"rx(^tdm[-_]?(m|as).*$)rx",                  CONST_MAP_ID_TDM_MIASMA },
        { R"rx(^tdm[-_]?(n|k|ba).*$)rx",                CONST_MAP_ID_TDM_NIGHTABATIC },
        { R"rx(^tdm[-_]?(o|sk).*$)rx",                  CONST_MAP_ID_TDM_OUTSKIRTS },
        { R"rx(^tdm[-_]?(q|sa).*$)rx",                  CONST_MAP_ID_TDM_QUICKSAND },
        { R"rx(^tdm[-_]?(sc|su|co).*$)rx",              CONST_MAP_ID_TDM_SULFURCOVE },
    };

    std::map<int, std::string> map_id_to_name = {
        { CONST_MAP_ID_CTF_KATABATIC,              "[CTF] Katabatic" },
        { CONST_MAP_ID_CTF_ARXNOVENA,              "[CTF] Arx Novena" },
        { CONST_MAP_ID_CTF_DRYDOCK,                "[CTF] Drydock" },
        { CONST_MAP_ID_RABBIT_OUTSKIRTS,           "[Rabbit] Outskirts" },
        { CONST_MAP_ID_RABBIT_QUICKSAND,           "[Rabbit] Quicksand" },
        { CONST_MAP_ID_CTF_CROSSFIRE,              "[CTF] Crossfire" },
        { CONST_MAP_ID_RABBIT_CROSSFIRE,           "[Rabbit] Crossfire" },
        { CONST_MAP_ID_TDM_DRYDOCKNIGHT,           "[TDM] Drydock Night" },
        { CONST_MAP_ID_TDM_CROSSFIRE,              "[TDM] Crossfire" },
        { CONST_MAP_ID_TDM_QUICKSAND,              "[TDM] Quicksand" },
        { CONST_MAP_ID_TDM_NIGHTABATIC,            "[TDM] Nightabatic" },
        { CONST_MAP_ID_TDM_INFERNO,                "[TDM] Inferno" },
        { CONST_MAP_ID_TDM_SULFURCOVE,             "[TDM] Sulfur Cove" },
        { CONST_MAP_ID_TDM_OUTSKIRTS,              "[TDM] Outskirts" },
        { CONST_MAP_ID_RABBIT_INFERNO,             "[Rabbit] Inferno" },
        { CONST_MAP_ID_CTF_TEMPLERUINS,            "[CTF] Temple Ruins" },
        { CONST_MAP_ID_RABBIT_NIGHTABATIC,         "[Rabbit] Nightabatic" },
        { CONST_MAP_ID_ARENA_AIRARENA,             "[Arena] Air Arena" },
        { CONST_MAP_ID_RABBIT_SULFURCOVE,          "[Rabbit] Sulfur Cove" },
        { CONST_MAP_ID_ARENA_WALLEDIN,             "[Arena] Walled In" },
        { CONST_MAP_ID_ARENA_LAVAARENA,            "[Arena] Lava Arena" },
        { CONST_MAP_ID_CTF_TARTARUS,               "[CTF] Tartarus" },
        { CONST_MAP_ID_CTF_CANYONCRUSADEREVIVAL,   "[CTF] Canyon Crusade Revival" },
        { CONST_MAP_ID_CTF_RAINDANCE,              "[CTF] Raindance" },
        { CONST_MAP_ID_CAH_KATABATIC,              "[CaH] Katabatic" },
        { CONST_MAP_ID_CTF_STONEHENGE,             "[CTF] Stonehenge" },
        { CONST_MAP_ID_CTF_SUNSTAR,                "[CTF] Sunstar" },
        { CONST_MAP_ID_CAH_OUTSKIRTS3P,            "[CaH] Outskirts 3P" },
        { CONST_MAP_ID_CAH_RAINDANCE,              "[CaH] Raindance" },
        { CONST_MAP_ID_CAH_DRYDOCKNIGHT,           "[CaH] Drydock Night" },
        { CONST_MAP_ID_ARENA_HINTERLANDS,          "[Arena] Hinterlands" },
        { CONST_MAP_ID_CTF_PERMAFROST,             "[CTF] Permafrost" },
        { CONST_MAP_ID_CAH_SULFURCOVE,             "[CaH] Sulfur Cove" },
        { CONST_MAP_ID_TDM_MIASMA,                 "[TDM] Miasma" },
        { CONST_MAP_ID_CAH_TARTARUS,               "[CaH] Tartarus" },
        { CONST_MAP_ID_CTF_DANGEROUSCROSSING,      "[CTF] Dangerous Crossing" },
        { CONST_MAP_ID_BLITZ_CROSSFIRE,            "[Blitz] Crossfire" },
        { CONST_MAP_ID_CTF_BLUESHIFT,              "[CTF] Blueshift" },
        { CONST_MAP_ID_ARENA_WHITEOUT,             "[Arena] Whiteout" },
        { CONST_MAP_ID_ARENA_FRAYTOWN,             "[Arena] Fraytown" },
        { CONST_MAP_ID_ARENA_UNDERCROFT,           "[Arena] Undercroft" },
        { CONST_MAP_ID_CAH_CANYONCRUSADEREVIVAL,   "[CaH] Canyon Crusade Revival" },
        { CONST_MAP_ID_BLITZ_CANYONCRUSADEREVIVAL, "[Blitz] Canyon Crusade Revival" },
        { CONST_MAP_ID_BLITZ_BELLAOMEGA,           "[Blitz] Bella Omega" },
        { CONST_MAP_ID_CTF_BELLAOMEGANS,           "[CTF] Bella Omega NS" },
        { CONST_MAP_ID_BLITZ_BLUESHIFT,            "[Blitz] Blueshift" },
        { CONST_MAP_ID_CTF_TERMINUS,               "[CTF] Terminus" },
        { CONST_MAP_ID_CTF_ICECOASTER,             "[CTF] Icecoaster" },
        { CONST_MAP_ID_CTF_PERDITION,              "[CTF] Perdition" },
        { CONST_MAP_ID_CTF_HELLFIRE,               "[CTF] Hellfire" },
        { CONST_MAP_ID_BLITZ_HELLFIRE,             "[Blitz] Hellfire" },
        { CONST_MAP_ID_CTF_BELLAOMEGA,             "[CTF] Bella Omega" },
        { CONST_MAP_ID_BLITZ_ARXNOVENA,            "[Blitz] Arx Novena" },
        { CONST_MAP_ID_BLITZ_KATABATIC,            "[Blitz] Katabatic" },
        { CONST_MAP_ID_BLITZ_DRYDOCK,              "[Blitz] Drydock" },
    };

    std::map<int, std::string> map_id_to_filename = {
        { CONST_MAP_ID_CTF_KATABATIC,               "TrCTF-Katabatic" },
        { CONST_MAP_ID_CTF_ARXNOVENA,              "TrCTF-ArxNovena" },
        { CONST_MAP_ID_CTF_DRYDOCK,                "TrCTF-Drydock" },
        { CONST_MAP_ID_RABBIT_OUTSKIRTS,           "TrRabbit-ArxNovena" },
        { CONST_MAP_ID_RABBIT_QUICKSAND,           "TrRabbit-BellaOmega" },
        { CONST_MAP_ID_CTF_CROSSFIRE,              "TrCTF-Crossfire" },
        { CONST_MAP_ID_RABBIT_CROSSFIRE,           "TrRabbit-Crossfire" },
        { CONST_MAP_ID_TDM_DRYDOCKNIGHT,           "TrTeamRabbit-Drydock" },
        { CONST_MAP_ID_TDM_CROSSFIRE,              "TrTeamRabbit-Crossfire" },
        { CONST_MAP_ID_TDM_QUICKSAND,              "TrTeamRabbit-BellaOmega" },
        { CONST_MAP_ID_TDM_NIGHTABATIC,            "TrTeamRabbit-NightKatabatic" },
        { CONST_MAP_ID_TDM_INFERNO,                "TrTeamRabbit-Harabec" },
        { CONST_MAP_ID_TDM_SULFURCOVE,             "TrTeamRabbit-CrossfireSmall" },
        { CONST_MAP_ID_TDM_OUTSKIRTS,              "TrTeamRabbit-ArxNovena" },
        { CONST_MAP_ID_RABBIT_INFERNO,             "TrRabbit-Harabec" },
        { CONST_MAP_ID_CTF_TEMPLERUINS,            "TrCTF-RuinsOfHarabec" },
        { CONST_MAP_ID_RABBIT_NIGHTABATIC,         "TrRabbit-NightKatabatic" },
        { CONST_MAP_ID_ARENA_AIRARENA,             "TrArena-Airarena" },
        { CONST_MAP_ID_RABBIT_SULFURCOVE,          "TrRabbit-CrossfireSmall" },
        { CONST_MAP_ID_ARENA_WALLEDIN,             "TrArena-Walledin" },
        { CONST_MAP_ID_ARENA_LAVAARENA,            "TrArena-Lavarena" },
        { CONST_MAP_ID_CTF_TARTARUS,               "TrCTF-Tartarus" },
        { CONST_MAP_ID_CTF_CANYONCRUSADEREVIVAL,   "TrCTF-CanyonCrusadeRev" },
        { CONST_MAP_ID_CTF_RAINDANCE,              "TrCTF-Raindance" },
        { CONST_MAP_ID_CAH_KATABATIC,              "TrCaH-Katabatic" },
        { CONST_MAP_ID_CTF_STONEHENGE,             "TrCTF-Stonehenge2" },
        { CONST_MAP_ID_CTF_SUNSTAR,                "TrCTF-Sunstar" },
        { CONST_MAP_ID_CAH_OUTSKIRTS3P,            "TrCaH-ArxOutskirts_3p" },
        { CONST_MAP_ID_CAH_RAINDANCE,              "TrCaH-Raindance" },
        { CONST_MAP_ID_CAH_DRYDOCKNIGHT,           "TrCaH-Drydock" },
        { CONST_MAP_ID_ARENA_HINTERLANDS,          "TrArena-Hinterland" },
        { CONST_MAP_ID_CTF_PERMAFROST,             "TrCTF-Permafrost" },
        { CONST_MAP_ID_CAH_SULFURCOVE,             "TrCaH-FrossfireSmall" },
        { CONST_MAP_ID_TDM_MIASMA,                 "TrTeamRabbit-Tartarus" },
        { CONST_MAP_ID_CAH_TARTARUS,               "TrCaH-Tartarus" },
        { CONST_MAP_ID_CTF_DANGEROUSCROSSING,      "TrCTF-DangerousCrossing" },
        { CONST_MAP_ID_BLITZ_CROSSFIRE,            "TrCTFBlitz-Crossfire" },
        { CONST_MAP_ID_CTF_BLUESHIFT,              "TrCTF-Blueshift" },
        { CONST_MAP_ID_ARENA_WHITEOUT,             "TrArena-Whiteout" },
        { CONST_MAP_ID_ARENA_FRAYTOWN,             "TrArena-Fraytown" },
        { CONST_MAP_ID_ARENA_UNDERCROFT,           "TrArena-Undercroft" },
        { CONST_MAP_ID_CAH_CANYONCRUSADEREVIVAL,   "TrCaH-CanyonCrusadeRev" },
        { CONST_MAP_ID_BLITZ_CANYONCRUSADEREVIVAL, "TrCTFBlitz-CanyonCrusadeRev" },
        { CONST_MAP_ID_BLITZ_BELLAOMEGA,           "TrCTFBlitz-BellaOmega" },
        { CONST_MAP_ID_CTF_BELLAOMEGANS,           "TrCTF-BellaOmegaNS" },
        { CONST_MAP_ID_BLITZ_BLUESHIFT,            "TrCTFBlitz-Blueshift" },
        { CONST_MAP_ID_CTF_TERMINUS,               "TrCTF-Terminus" },
        { CONST_MAP_ID_BLITZ_TERMINUS,             "TrCTFBlitz-Terminus" },
        { CONST_MAP_ID_CTF_ICECOASTER,             "TrCTF-IceCoaster" },
        { CONST_MAP_ID_BLITZ_ICECOASTER,           "TrCTFBlitz-IceCoaster" },
        { CONST_MAP_ID_CTF_PERDITION,              "TrCTF-Perdition" },
        { CONST_MAP_ID_TDM_PERDITION,              "TrTeamRabbit-Perdition" },
        { CONST_MAP_ID_CTF_HELLFIRE,               "TrCTF-Hellfire" },
        { CONST_MAP_ID_BLITZ_HELLFIRE,             "TrCTFBlitz-Hellfire" },
        { CONST_MAP_ID_CTF_BELLAOMEGA,             "TrCTF-BellaOmega" },
        { CONST_MAP_ID_BLITZ_ARXNOVENA,            "TrCTFBlitz-ArxNovena" },
        { CONST_MAP_ID_BLITZ_KATABATIC,            "TrCTFBlitz-Katabatic" },
        { CONST_MAP_ID_BLITZ_DRYDOCK,              "TrCTFBlitz-Drydock" },
    };

    std::map<std::string, int> projectiles = {
        { R"rx(^(fraggrenades?|frags?)$)rx", CONST_PROJ_ID_GRENADE }, 
        { R"rx(^(stickygrenades?|sticky|stickies)$)rx", CONST_PROJ_ID_STICKY_GRENADE },
        { R"rx(^(lacerator)$)rx", CONST_PROJ_ID_LACERATOR }, // Trivial regex
        { R"rx(^(mines?)$)rx", CONST_PROJ_ID_MINE },
        { R"rx(^(claymores?|claymoremines?)$)rx", CONST_PROJ_ID_CLAYMORE },
        { R"rx(^(prismmines?|mines?)$)rx", CONST_PROJ_ID_PRISM_MINE },
        { R"rx(^(repairkits?)$)rx", CONST_PROJ_ID_REPAIR_DEPLOYABLE },
        { R"rx(^(throwdeployable)$)rx", CONST_PROJ_ID_THROW_DEPLOYABLE }, // Trivial regex
        { R"rx(^(saberlauncher|saber)$)rx", CONST_PROJ_ID_TRACKING_MISSILE },
        { R"rx(^(tracer)$)rx", CONST_PROJ_ID_TRACER }, // Trivial regex
        { R"rx(^(clienttracer)$)rx", CONST_PROJ_ID_CLIENT_TRACER }, // Trivial regex
        { R"rx(^(callinbase)$)rx", CONST_PROJ_ID_CALL_IN_BASE }, // Trivial regex
        { R"rx(^(orbitalstrike)$)rx", CONST_PROJ_ID_ORBITAL_STRIKE }, // Trivial regex //Audio crash?
        { R"rx(^(tacticalstrike)$)rx", CONST_PROJ_ID_TACTICAL_STRIKE }, // Trivial regex //Audio crash
        { R"rx(^(anti-?personnelgrenades?|aps?|apgrenades?)$)rx", CONST_PROJ_ID_AP_GRENADE },
        { R"rx(^(arc8)$)rx", CONST_PROJ_ID_ARC8 }, // Trivial regex
        { R"rx(^(motionmines?)$)rx", CONST_PROJ_ID_ARMORED_CLAYMORE },
        { R"rx(^(arxbuster|arx)$)rx", CONST_PROJ_ID_ARX_BUSTER },
        { R"rx(^(dustdevil)$)rx", CONST_PROJ_ID_ARX_BUSTER_MKD },
        { R"rx(^(arxshotgun)$)rx", CONST_PROJ_ID_ARX_SHOTGUN }, // Trivial regex, what is this?
        { R"rx(^(assaultrifle|rifle|ar)$)rx", CONST_PROJ_ID_ASSAULT_RIFLE },
        { R"rx(^(gast('s)?(rifle)?)$)rx", CONST_PROJ_ID_ASSAULT_RIFLE_MKD },
        { R"rx(^(avmine)$)rx", CONST_PROJ_ID_AV_MINE }, // Trivial regex
        { R"rx(^(bolt|boltlauncher)$)rx", CONST_PROJ_ID_BOLT_LAUNCHER },
        { R"rx(^(buckler)$)rx", CONST_PROJ_ID_BUCKLER }, // Trivial regex, actually a spinfusor
        { R"rx(^(chaingun)$)rx", CONST_PROJ_ID_CHAINGUN },
        { R"rx(^(chaincannon)$)rx", CONST_PROJ_ID_CHAINGUN_MKD },
        { R"rx(^(claymoremkd)$)rx", CONST_PROJ_ID_CLAYMORE_MKD }, // Trivial regex
        { R"rx(^(nitrons?|impactnitrons?|impacts?)$)rx", CONST_PROJ_ID_CONCUSSION_GRENADE },
        { R"rx(^(compactnitrons?|compacts?)$)rx", CONST_PROJ_ID_CONCUSSION_GRENADE_MKD },
        { R"rx(^(spinfusordisks?|spinfusordiscs?|spins?|disks?|discs?|spindisks?|spindiscs?)$)rx", CONST_PROJ_ID_DISK_TOSS },
        { R"rx(^(spinfusor|spin)$)rx", CONST_PROJ_ID_SPINFUSOR },
        { R"rx(^(flak(cannon)?)$)rx", CONST_PROJ_ID_TC24 },
        { R"rx(^(efg)$)rx", CONST_PROJ_ID_ELF_FLAK },
        { R"rx(^(emps?|empgrenades?)$)rx", CONST_PROJ_ID_EMP_GRENADE },
        { R"rx(^(emps?xls?|emps?xlgrenades?)$)rx", CONST_PROJ_ID_EMP_GRENADE_MKD },
        { R"rx(^(falcon)$)rx", CONST_PROJ_ID_FALCON },
        { R"rx(^(flare(grenade)?)$)rx", CONST_PROJ_ID_FLARE_GRENADE }, 
        { R"rx(^(grenademkd)$)rx", CONST_PROJ_ID_GRENADE_MKD }, // Trivial regex
        { R"rx(^(grenadelauncher|nadelauncher|launcher|gl)$)rx", CONST_PROJ_ID_GRENADE_LAUNCHER },
        { R"rx(^(light(gre?)nadelauncher)$)rx", CONST_PROJ_ID_GRENADE_LAUNCHER_LIGHT },
        { R"rx(^(t5s?(grenades?)?)$)rx", CONST_PROJ_ID_GRENADE_T5 },
        { R"rx(^(fraggrenades?(xl)?|frags?(xl)?|grenades?(xl)?)$)rx", CONST_PROJ_ID_GRENADE_XL },
        { R"rx(^(short-?fusefrags?(grenades?)?|short-?fuses?)$)rx", CONST_PROJ_ID_GRENADE_XL_MKD },
        { R"rx(^(heavyaps?(grenades?)?)$)rx", CONST_PROJ_ID_HEAVY_AP_GRENADE },
        { R"rx(^(heavyaps?-?xls?(grenades?)?)$)rx", CONST_PROJ_ID_HEAVY_AP_GRENADE_MKD },
        { R"rx(^(heavyboltlauncher|boltlauncher|bolt)$)rx", CONST_PROJ_ID_HEAVY_BOLT_LAUNCHER },
        { R"rx(^(heavyimpactnitron)$)rx", CONST_PROJ_ID_HEAVY_IMPACT_NITRON }, // Trivial regex
        { R"rx(^(heavy(spin)?(fusor)?|spin(fusor)?|fusor)$)rx", CONST_PROJ_ID_HEAVY_SPINFUSOR },
        { R"rx(^((heavy)?blinks?(fusor)?)$)rx", CONST_PROJ_ID_HEAVY_SPINFUSOR_MKD },
        { R"rx(^(twinfusor)$)rx", CONST_PROJ_ID_TWINFUSOR },
        { R"rx(^(heavytwinfusor|twinfusor|twin)$)rx", CONST_PROJ_ID_HEAVY_TWINFUSOR },
        { R"rx(^(honorfusor|honourfusor|honor)$)rx", CONST_PROJ_ID_HONORFUSOR },
        { R"rx(^(impactbomblets)$)rx", CONST_PROJ_ID_IMPACT_BOMBLETS }, // Trivial regex
        { R"rx(^(lightassaultrifle|lar|ar|assaultrifle|rifle)$)rx", CONST_PROJ_ID_LIGHT_ASSAULT_RIFLE },
        { R"rx(^(spin(fusor)?|light(spin)?(fusor)?)$)rx", CONST_PROJ_ID_LIGHT_SPINFUSOR },
        { R"rx(^(blinks?|blinks?fusor)$)rx", CONST_PROJ_ID_LIGHT_SPINFUSOR_100X },
        { R"rx(^(dueling(spin)?(fusor)?)$)rx", CONST_PROJ_ID_LIGHT_SPINFUSOR_MKD },
        { R"rx(^((heavy|light)sticky(grenades?)?|lightstickies)$)rx", CONST_PROJ_ID_LIGHT_STICKY_GRENADE },
        { R"rx(^(twin|twinfusor|lighttwinfusor)$)rx", CONST_PROJ_ID_LIGHT_TWINFUSOR },
        { R"rx(^(lr1mortar)$)rx", CONST_PROJ_ID_LR1_MORTAR }, // Trivial regex
        { R"rx(^(clustergrenades?|clusters?)$)rx", CONST_PROJ_ID_MIRV_GRENADE },
        { R"rx(^(mirvlauncher|mirv)$)rx", CONST_PROJ_ID_MIRV_LAUNCHER },
        { R"rx(^(fusionmortar|mortar)$)rx", CONST_PROJ_ID_MORTAR_LAUNCHER },
        { R"rx(^((fusion)?mortardeluxe)$)rx", CONST_PROJ_ID_MORTAR_LAUNCHER_MKD },
        { R"rx(^(motionsensors?)$)rx", CONST_PROJ_ID_MOTION_SENSOR },
        { R"rx(^(chaffs?(grenades?)?)$)rx", CONST_PROJ_ID_NINJA_SMOKE },
        { R"rx(^(nj4smg|nj4)$)rx", CONST_PROJ_ID_NJ4_SMG },
        { R"rx(^(desertnj4|desertnj4smg)$)rx", CONST_PROJ_ID_NJ4_SMG_MKD },
        { R"rx(^(nj5(-?b)?(smg)?)$)rx", CONST_PROJ_ID_NJ5_SMG },
        { R"rx(^(nova|blaster|novablaster)$)rx", CONST_PROJ_ID_NOVA_COLT },
        { R"rx(^(mx|novablastermx|novamx|blaster(mx)?)$)rx", CONST_PROJ_ID_NOVA_COLT_MKD },
        { R"rx(^(plasmacannon)$)rx", CONST_PROJ_ID_PLASMA_CANNON },
        { R"rx(^(plasmagun|plasma)$)rx", CONST_PROJ_ID_PLASMA_GUN },
        { R"rx(^(proximitys?(grenades?)?|proxies|proxys?)$)rx", CONST_PROJ_ID_PROXIMITY_GRENADE },
        { R"rx(^(jackal)$)rx", CONST_PROJ_ID_REMOTE_ARX_BUSTER },
        { R"rx(^(rhino(smg)?)$)rx", CONST_PROJ_ID_RHINO_SMG },
        { R"rx(^(arcticrhino(smg)?)$)rx", CONST_PROJ_ID_RHINO_SMG_MKD },
        { R"rx(^(rocketlauncher)$)rx", CONST_PROJ_ID_ROCKET_LAUNCHER }, // Trivial regex, actually a spinfusor
        { R"rx(^(saber(launcher)?dumbfire)$)rx", CONST_PROJ_ID_TRACKING_MISSILE_DUMBFIRE }, // Trivial regex
        { R"rx(^(titanlauncher|titan)$)rx", CONST_PROJ_ID_TRACKING_MISSILE_MKD },
        { R"rx(^(sn7(silenced)?(pistol)?)$)rx", CONST_PROJ_ID_SN7 },
        { R"rx(^(arcticsn7(silenced)?(pistol)?)$)rx", CONST_PROJ_ID_SN7_MKD },
        { R"rx(^(fractals?|fractalgrenades?)$)rx", CONST_PROJ_ID_SPIKE_GRENADE },
        { R"rx(^(extendedfractals?(grenades?)?)$)rx", CONST_PROJ_ID_SPIKE_GRENADE_MKD },
        { R"rx(^(gladiator)$)rx", CONST_PROJ_ID_SPIKE_LAUNCHER },
        { R"rx(^(blinks?|blinks?fusor|sparespin(fusor)?)$)rx", CONST_PROJ_ID_SPINFUSOR_100X },
        { R"rx(^(spinfusormkd)$)rx", CONST_PROJ_ID_SPINFUSOR_D },
        { R"rx(^(spinfusormk-?x)$)rx", CONST_PROJ_ID_SPINFUSOR_D_MKD },
        { R"rx(^(stealth(spin)?(fusor)?)$)rx", CONST_PROJ_ID_STEALTH_SPINFUSOR },
        { R"rx(^(explosivenitrons?|explosives?)$)rx", CONST_PROJ_ID_ST_GRENADE },
        { R"rx(^(stickygrenades?xl|stickyxl|stickiesxl)$)rx", CONST_PROJ_ID_STICKY_GRENADE_MKD },
        { R"rx(^(targetingbeacon)$)rx", CONST_PROJ_ID_TARGETING_BEACON }, // Trivial regex, what is this?
        { R"rx(^(tcn4(smg)?)$)rx", CONST_PROJ_ID_TCN4_SMG },
        { R"rx(^(tcn4rockwind(smg)?)$)rx", CONST_PROJ_ID_TCN4_SMG_MKD },
        { R"rx(^(tcng(grenade)?)$)rx", CONST_PROJ_ID_TCNG },
        { R"rx(^(tcng(quick|short)?-?fuse(grenade)?)$)rx", CONST_PROJ_ID_TCNG_MKD },
        { R"rx(^(throwingknives|knives)$)rx", CONST_PROJ_ID_THROWING_KNIVES },
        { R"rx(^(thumper)$)rx", CONST_PROJ_ID_THUMPER },
        { R"rx(^(thumperd)$)rx", CONST_PROJ_ID_THUMPER_D },
        { R"rx(^(thumperdx)$)rx", CONST_PROJ_ID_THUMPER_D_MKD },
        { R"rx(^(blackouts?|blackoutgrenades?)$)rx", CONST_PROJ_ID_WHITE_OUT },
        { R"rx(^(x1|lmg|x1lmg)$)rx", CONST_PROJ_ID_X1_RIFLE },
        { R"rx(^(exr(turret)?)$)rx", CONST_PROJ_ID_ANTI_AIR_TURRET }, 
        { R"rx(^(baseturret)$)rx", CONST_PROJ_ID_BASE_TURRET }, // Trivial regex
        { R"rx(^(beowulfgunner)$)rx", CONST_PROJ_ID_BEOWULF_GUNNER }, // Trivial regex
        { R"rx(^(beowulfpilot)$)rx", CONST_PROJ_ID_BEOWULF_PILOT }, // Trivial regex
        { R"rx(^(bxt)$)rx", CONST_PROJ_ID_BXT }, // Trivial regex
        { R"rx(^(chaingunbullettracer)$)rx", CONST_PROJ_ID_CHAINGUN_BULLET_TRACER }, // Trivial regex
        { R"rx(^(gravcyclepilot)$)rx", CONST_PROJ_ID_GRAV_CYCLE_PILOT }, // Trivial regex
        { R"rx(^(havocpilot)$)rx", CONST_PROJ_ID_HAVOC_PILOT }, // Trivial regex
        { R"rx(^(hercgunner)$)rx", CONST_PROJ_ID_HERC_GUNNER }, // Trivial regex
        { R"rx(^(hercpilot)$)rx", CONST_PROJ_ID_HERC_PILOT }, // Trivial regex
        { R"rx(^(lightturret)$)rx", CONST_PROJ_ID_LIGHT_TURRET }, // Trivial regex
        { R"rx(^(mirv(launcher)?secondary)$)rx", CONST_PROJ_ID_MIRV_LAUNCHER_SECONDARY }, 
        { R"rx(^(clusterecondary)$)rx", CONST_PROJ_ID_MIRV_GRENADE_SECONDARY }, 
        { R"rx(^(pistolbullettracer)$)rx", CONST_PROJ_ID_PISTOL_BULLET_TRACER }, // Trivial regex
        { R"rx(^(sap20)$)rx", CONST_PROJ_ID_SAP20 }, // Trivial regex
        { R"rx(^(shrikepilot)$)rx", CONST_PROJ_ID_SHRIKE_PILOT }, // Trivial regex
        { R"rx(^(gladiatorsecond(ary)?)$)rx", CONST_PROJ_ID_SPIKE_LAUNCHER_SECONDARY }, 
        { R"rx(^(gladiator(third|tertiary))$)rx", CONST_PROJ_ID_SPIKE_LAUNCHER_THIRD }, 
        { R"rx(^(wallturret)$)rx", CONST_PROJ_ID_WALL_TURRET }, // Trivial regex 
    };

    std::map<int, std::string> projectile_id_to_name = {    

        { CONST_PROJ_ID_GRENADE, "Grenade" },
        { CONST_PROJ_ID_STICKY_GRENADE, "StickyGrenade" },
        { CONST_PROJ_ID_LACERATOR, "Lacerator" },
        { CONST_PROJ_ID_MINE, "Mine" },
        { CONST_PROJ_ID_CLAYMORE, "Claymore" },
        { CONST_PROJ_ID_PRISM_MINE, "PrismMine" },
        { CONST_PROJ_ID_REPAIR_DEPLOYABLE, "RepairDeployable" },
        { CONST_PROJ_ID_THROW_DEPLOYABLE, "ThrowDeployable" },
        { CONST_PROJ_ID_TRACKING_MISSILE, "TrackingMissile" },
        { CONST_PROJ_ID_TRACER, "Tracer" },
        { CONST_PROJ_ID_CLIENT_TRACER, "ClientTracer" },
        { CONST_PROJ_ID_CALL_IN_BASE, "CallInBase" },
        { CONST_PROJ_ID_ORBITAL_STRIKE, "OrbitalStrike" },
        { CONST_PROJ_ID_TACTICAL_STRIKE, "TacticalStrike" },
        { CONST_PROJ_ID_AP_GRENADE, "APGrenade" },
        { CONST_PROJ_ID_ARC8, "ARC8" },
        { CONST_PROJ_ID_ARMORED_CLAYMORE, "ArmoredClaymore" },
        { CONST_PROJ_ID_ARX_BUSTER, "ArxBuster" },
        { CONST_PROJ_ID_ARX_BUSTER_MKD, "ArxBuster_MKD" },
        { CONST_PROJ_ID_ARX_SHOTGUN, "ArxShotgun" },
        { CONST_PROJ_ID_ASSAULT_RIFLE, "AssaultRifle" },
        { CONST_PROJ_ID_ASSAULT_RIFLE_MKD, "AssaultRifle_MKD" },
        { CONST_PROJ_ID_AV_MINE, "AVMine" },
        { CONST_PROJ_ID_BOLT_LAUNCHER, "BoltLauncher" },
        { CONST_PROJ_ID_BUCKLER, "Buckler" },
        { CONST_PROJ_ID_CHAINGUN, "Chaingun" },
        { CONST_PROJ_ID_CHAINGUN_MKD, "Chaingun_MKD" },
        { CONST_PROJ_ID_CLAYMORE_MKD, "Claymore_MKD" },
        { CONST_PROJ_ID_CONCUSSION_GRENADE, "ConcussionGrenade" },
        { CONST_PROJ_ID_CONCUSSION_GRENADE_MKD, "ConcussionGrenade_MKD" },
        { CONST_PROJ_ID_DISK_TOSS, "DiskToss" },
        { CONST_PROJ_ID_SPINFUSOR, "Spinfusor" },
        { CONST_PROJ_ID_TC24, "TC24" },
        { CONST_PROJ_ID_ELF_FLAK, "ElfFlak" },
        { CONST_PROJ_ID_EMP_GRENADE, "EMPGrenade" },
        { CONST_PROJ_ID_EMP_GRENADE_MKD, "EMPGrenade_MKD" },
        { CONST_PROJ_ID_FALCON, "Falcon" },
        { CONST_PROJ_ID_FLARE_GRENADE, "FlareGrenade" },
        { CONST_PROJ_ID_GRENADE_MKD, "Grenade_MKD" },
        { CONST_PROJ_ID_GRENADE_LAUNCHER, "GrenadeLauncher" },
        { CONST_PROJ_ID_GRENADE_LAUNCHER_LIGHT, "GrenadeLauncher_Light" },
        { CONST_PROJ_ID_GRENADE_T5, "GrenadeT5" },
        { CONST_PROJ_ID_GRENADE_XL, "GrenadeXL" },
        { CONST_PROJ_ID_GRENADE_XL_MKD, "GrenadeXL_MKD" },
        { CONST_PROJ_ID_HEAVY_AP_GRENADE, "HeavyAPGrenade" },
        { CONST_PROJ_ID_HEAVY_AP_GRENADE_MKD, "HeavyAPGrenade_MKD" },
        { CONST_PROJ_ID_HEAVY_BOLT_LAUNCHER, "HeavyBoltLauncher" },
        { CONST_PROJ_ID_HEAVY_IMPACT_NITRON, "HeavyImpactNitron" },
        { CONST_PROJ_ID_HEAVY_SPINFUSOR, "HeavySpinfusor" },
        { CONST_PROJ_ID_HEAVY_SPINFUSOR_MKD, "HeavySpinfusor_MKD" },
        { CONST_PROJ_ID_TWINFUSOR, "Twinfusor" },
        { CONST_PROJ_ID_HEAVY_TWINFUSOR, "HeavyTwinfusor" },
        { CONST_PROJ_ID_HONORFUSOR, "Honorfusor" },
        { CONST_PROJ_ID_IMPACT_BOMBLETS, "ImpactBomblets" },
        { CONST_PROJ_ID_LIGHT_ASSAULT_RIFLE, "LightAssaultRifle" },
        { CONST_PROJ_ID_LIGHT_SPINFUSOR, "LightSpinfusor" },
        { CONST_PROJ_ID_LIGHT_SPINFUSOR_100X, "LightSpinfusor_100X" },
        { CONST_PROJ_ID_LIGHT_SPINFUSOR_MKD, "LightSpinfusor_MKD" },
        { CONST_PROJ_ID_LIGHT_STICKY_GRENADE, "LightStickyGrenade" },
        { CONST_PROJ_ID_LIGHT_TWINFUSOR, "LightTwinfusor" },
        { CONST_PROJ_ID_LR1_MORTAR, "LR1Mortar" },
        { CONST_PROJ_ID_MIRV_GRENADE, "MIRVGrenade" },
        { CONST_PROJ_ID_MIRV_LAUNCHER, "MIRVLauncher" },
        { CONST_PROJ_ID_MORTAR_LAUNCHER, "MortarLauncher" },
        { CONST_PROJ_ID_MORTAR_LAUNCHER_MKD, "MortarLauncher_MKD" },
        { CONST_PROJ_ID_MOTION_SENSOR, "MotionSensor" },
        { CONST_PROJ_ID_NINJA_SMOKE, "NinjaSmoke" },
        { CONST_PROJ_ID_NJ4_SMG, "NJ4SMG" },
        { CONST_PROJ_ID_NJ4_SMG_MKD, "NJ4SMG_MKD" },
        { CONST_PROJ_ID_NJ5_SMG, "NJ5SMG" },
        { CONST_PROJ_ID_NOVA_COLT, "NovaColt" },
        { CONST_PROJ_ID_NOVA_COLT_MKD, "NovaColt_MKD" },
        { CONST_PROJ_ID_PLASMA_CANNON, "PlasmaCannon" },
        { CONST_PROJ_ID_PLASMA_GUN, "PlasmaGun" },
        { CONST_PROJ_ID_PROXIMITY_GRENADE, "ProximityGrenade" },
        { CONST_PROJ_ID_REMOTE_ARX_BUSTER, "RemoteArxBuster" },
        { CONST_PROJ_ID_RHINO_SMG, "RhinoSMG" },
        { CONST_PROJ_ID_RHINO_SMG_MKD, "RhinoSMG_MKD" },
        { CONST_PROJ_ID_ROCKET_LAUNCHER, "RocketLauncher" },
        { CONST_PROJ_ID_TRACKING_MISSILE_DUMBFIRE, "TrackingMissile_DumbFire" },
        { CONST_PROJ_ID_TRACKING_MISSILE_MKD, "TrackingMissile_MKD" },
        { CONST_PROJ_ID_SN7, "SN7" },
        { CONST_PROJ_ID_SN7_MKD, "SN7_MKD" },
        { CONST_PROJ_ID_SPIKE_GRENADE, "SpikeGrenade" },
        { CONST_PROJ_ID_SPIKE_GRENADE_MKD, "SpikeGrenade_MKD" },
        { CONST_PROJ_ID_SPIKE_LAUNCHER, "SpikeLauncher" },
        { CONST_PROJ_ID_SPINFUSOR_100X, "Spinfusor_100X" },
        { CONST_PROJ_ID_SPINFUSOR_D, "SpinfusorD" },
        { CONST_PROJ_ID_SPINFUSOR_D_MKD, "SpinfusorD_MKD" },
        { CONST_PROJ_ID_STEALTH_SPINFUSOR, "StealthSpinfusor" },
        { CONST_PROJ_ID_ST_GRENADE, "STGrenade" },
        { CONST_PROJ_ID_STICKY_GRENADE_MKD, "StickyGrenade_MKD" },
        { CONST_PROJ_ID_TARGETING_BEACON, "TargetingBeacon" },
        { CONST_PROJ_ID_TCN4_SMG, "TCN4SMG" },
        { CONST_PROJ_ID_TCN4_SMG_MKD, "TCN4SMG_MKD" },
        { CONST_PROJ_ID_TCNG, "TCNG" },
        { CONST_PROJ_ID_TCNG_MKD, "TCNG_MKD" },
        { CONST_PROJ_ID_THROWING_KNIVES, "ThrowingKnives" },
        { CONST_PROJ_ID_THUMPER, "Thumper" },
        { CONST_PROJ_ID_THUMPER_D, "ThumperD" },
        { CONST_PROJ_ID_THUMPER_D_MKD, "ThumperD_MKD" },
        { CONST_PROJ_ID_WHITE_OUT, "WhiteOut" },
        { CONST_PROJ_ID_X1_RIFLE, "X1Rifle" },
        { CONST_PROJ_ID_ANTI_AIR_TURRET, "AntiAirTurret" },
        { CONST_PROJ_ID_BASE_TURRET, "BaseTurret" },
        { CONST_PROJ_ID_BEOWULF_GUNNER, "BeowulfGunner" },
        { CONST_PROJ_ID_BEOWULF_PILOT, "BeowulfPilot" },
        { CONST_PROJ_ID_BXT, "BXT" },
        { CONST_PROJ_ID_CHAINGUN_BULLET_TRACER, "ChaingunBulletTracer" },
        { CONST_PROJ_ID_GRAV_CYCLE_PILOT, "GravCyclePilot" },
        { CONST_PROJ_ID_HAVOC_PILOT, "HavocPilot" },
        { CONST_PROJ_ID_HERC_GUNNER, "HERCGunner" },
        { CONST_PROJ_ID_HERC_PILOT, "HERCPilot" },
        { CONST_PROJ_ID_LIGHT_TURRET, "LightTurret" },
        { CONST_PROJ_ID_MIRV_LAUNCHER_SECONDARY, "MIRVLauncherSecondary" },
        { CONST_PROJ_ID_MIRV_GRENADE_SECONDARY, "MIRVGrenadeSecondary" },
        { CONST_PROJ_ID_PISTOL_BULLET_TRACER, "PistolBulletTracer" },
        { CONST_PROJ_ID_SAP20, "SAP20" },
        { CONST_PROJ_ID_SHRIKE_PILOT, "ShrikePilot" },
        { CONST_PROJ_ID_SPIKE_LAUNCHER_SECONDARY, "SpikeLauncherSecondary" },
        { CONST_PROJ_ID_SPIKE_LAUNCHER_THIRD, "SpikeLauncherThird" },
        { CONST_PROJ_ID_WALL_TURRET, "WallTurret" },

    };

    std::map<std::string, UClass*> projectile_classes = {
        { R"rx(^(fraggrenades?|frags?)$)rx", ATrProj_Grenade::StaticClass() }, 
        { R"rx(^(stickygrenades?|sticky|stickies)$)rx", ATrProj_StickyGrenade::StaticClass() },
        { R"rx(^(lacerator)$)rx", ATrProj_Lacerator::StaticClass() }, // Trivial regex
        { R"rx(^(mines?)$)rx", ATrProj_Mine::StaticClass() },
        { R"rx(^(claymores?|claymoremines?)$)rx", ATrProj_Claymore::StaticClass() },
        { R"rx(^(prismmines?|mines?)$)rx", ATrProj_PrismMine::StaticClass() },
        { R"rx(^(repairkits?)$)rx", ATrProj_RepairDeployable::StaticClass() },
        { R"rx(^(throwdeployable)$)rx", ATrProj_ThrowDeployable::StaticClass() }, // Trivial regex
        { R"rx(^(saberlauncher|saber)$)rx", ATrProj_TrackingMissile::StaticClass() },
        { R"rx(^(tracer)$)rx", ATrProj_Tracer::StaticClass() }, // Trivial regex
        { R"rx(^(clienttracer)$)rx", ATrProj_ClientTracer::StaticClass() }, // Trivial regex
        { R"rx(^(callinbase)$)rx", ATrProj_CallInBase::StaticClass() }, // Trivial regex
        { R"rx(^(orbitalstrike)$)rx", ATrProj_OrbitalStrike::StaticClass() }, // Trivial regex //Audio crash?
        { R"rx(^(tacticalstrike)$)rx", ATrProj_TacticalStrike::StaticClass() }, // Trivial regex //Audio crash
        { R"rx(^(anti-?personnelgrenades?|aps?|apgrenades?)$)rx", ATrProj_APGrenade::StaticClass() },
        { R"rx(^(arc8)$)rx", ATrProj_ARC8::StaticClass() }, // Trivial regex
        { R"rx(^(motionmines?)$)rx", ATrProj_ArmoredClaymore::StaticClass() },
        { R"rx(^(arxbuster|arx)$)rx", ATrProj_ArxBuster::StaticClass() },
        { R"rx(^(dustdevil)$)rx", ATrProj_ArxBuster_MKD::StaticClass() },
        { R"rx(^(arxshotgun)$)rx", ATrProj_ArxShotgun::StaticClass() }, // Trivial regex, what is this?
        { R"rx(^(assaultrifle|rifle|ar)$)rx", ATrProj_AssaultRifle::StaticClass() },
        { R"rx(^(gast('s)?(rifle)?)$)rx", ATrProj_AssaultRifle_MKD::StaticClass() },
        { R"rx(^(avmine)$)rx", ATrProj_AVMine::StaticClass() }, // Trivial regex
        { R"rx(^(bolt|boltlauncher)$)rx", ATrProj_BoltLauncher::StaticClass() },
        { R"rx(^(buckler)$)rx", ATrProj_Buckler::StaticClass() }, // Trivial regex, actually a spinfusor
        { R"rx(^(chaingun)$)rx", ATrProj_Chaingun::StaticClass() },
        { R"rx(^(chaincannon)$)rx", ATrProj_Chaingun_MKD::StaticClass() },
        { R"rx(^(claymoremkd)$)rx", ATrProj_Claymore_MKD::StaticClass() }, // Trivial regex
        { R"rx(^(nitrons?|impactnitrons?|impacts?)$)rx", ATrProj_ConcussionGrenade::StaticClass() },
        { R"rx(^(compactnitrons?|compacts?)$)rx", ATrProj_ConcussionGrenade_MKD::StaticClass() },
        { R"rx(^(spinfusordisks?|spinfusordiscs?|spins?|disks?|discs?|spindisks?|spindiscs?)$)rx", ATrProj_DiskToss::StaticClass() },
        { R"rx(^(spinfusor|spin)$)rx", ATrProj_Spinfusor::StaticClass() },
        { R"rx(^(flak(cannon)?)$)rx", ATrProj_TC24::StaticClass() },
        { R"rx(^(efg)$)rx", ATrProj_ElfFlak::StaticClass() },
        { R"rx(^(emps?|empgrenades?)$)rx", ATrProj_EMPGrenade::StaticClass() },
        { R"rx(^(emps?xls?|emps?xlgrenades?)$)rx", ATrProj_EMPGrenade_MKD::StaticClass() },
        { R"rx(^(falcon)$)rx", ATrProj_Falcon::StaticClass() },
        { R"rx(^(flare(grenade)?)$)rx", ATrProj_FlareGrenade::StaticClass() }, 
        { R"rx(^(grenademkd)$)rx", ATrProj_Grenade_MKD::StaticClass() }, // Trivial regex
        { R"rx(^(grenadelauncher|nadelauncher|launcher|gl)$)rx", ATrProj_GrenadeLauncher::StaticClass() },
        { R"rx(^(light(gre?)nadelauncher)$)rx", ATrProj_GrenadeLauncher_Light::StaticClass() },
        { R"rx(^(t5s?(grenades?)?)$)rx", ATrProj_GrenadeT5::StaticClass() },
        { R"rx(^(fraggrenades?(xl)?|frags?(xl)?|grenades?(xl)?)$)rx", ATrProj_GrenadeXL::StaticClass() },
        { R"rx(^(short-?fusefrags?(grenades?)?|short-?fuses?)$)rx", ATrProj_GrenadeXL_MKD::StaticClass() },
        { R"rx(^(heavyaps?(grenades?)?)$)rx", ATrProj_HeavyAPGrenade::StaticClass() },
        { R"rx(^(heavyaps?-?xls?(grenades?)?)$)rx", ATrProj_HeavyAPGrenade_MKD::StaticClass() },
        { R"rx(^(heavyboltlauncher|boltlauncher|bolt)$)rx", ATrProj_HeavyBoltLauncher::StaticClass() },
        { R"rx(^(heavyimpactnitron)$)rx", ATrProj_HeavyImpactNitron::StaticClass() }, // Trivial regex
        { R"rx(^(heavy(spin)?(fusor)?|spin(fusor)?|fusor)$)rx", ATrProj_HeavySpinfusor::StaticClass() },
        { R"rx(^((heavy)?blinks?(fusor)?)$)rx", ATrProj_HeavySpinfusor_MKD::StaticClass() },
        { R"rx(^(twinfusor)$)rx", ATrProj_Twinfusor::StaticClass() },
        { R"rx(^(heavytwinfusor|twinfusor|twin)$)rx", ATrProj_HeavyTwinfusor::StaticClass() },
        { R"rx(^(honorfusor|honourfusor|honor)$)rx", ATrProj_Honorfusor::StaticClass() },
        { R"rx(^(impactbomblets)$)rx", ATrProj_ImpactBomblets::StaticClass() }, // Trivial regex
        { R"rx(^(lightassaultrifle|lar|ar|assaultrifle|rifle)$)rx", ATrProj_LightAssaultRifle::StaticClass() },
        { R"rx(^(spin(fusor)?|light(spin)?(fusor)?)$)rx", ATrProj_LightSpinfusor::StaticClass() },
        { R"rx(^(blinks?|blinks?fusor)$)rx", ATrProj_LightSpinfusor_100X::StaticClass() },
        { R"rx(^(dueling(spin)?(fusor)?)$)rx", ATrProj_LightSpinfusor_MKD::StaticClass() },
        { R"rx(^((heavy|light)sticky(grenades?)?|lightstickies)$)rx", ATrProj_LightStickyGrenade::StaticClass() },
        { R"rx(^(twin|twinfusor|lighttwinfusor)$)rx", ATrProj_LightTwinfusor::StaticClass() },
        { R"rx(^(lr1mortar)$)rx", ATrProj_LR1Mortar::StaticClass() }, // Trivial regex
        { R"rx(^(clustergrenades?|clusters?)$)rx", ATrProj_MIRVGrenade::StaticClass() },
        { R"rx(^(mirvlauncher|mirv)$)rx", ATrProj_MIRVLauncher::StaticClass() },
        { R"rx(^(fusionmortar|mortar)$)rx", ATrProj_MortarLauncher::StaticClass() },
        { R"rx(^((fusion)?mortardeluxe)$)rx", ATrProj_MortarLauncher_MKD::StaticClass() },
        { R"rx(^(motionsensors?)$)rx", ATrProj_MotionSensor::StaticClass() },
        { R"rx(^(chaffs?(grenades?)?)$)rx", ATrProj_NinjaSmoke::StaticClass() },
        { R"rx(^(nj4smg|nj4)$)rx", ATrProj_NJ4SMG::StaticClass() },
        { R"rx(^(desertnj4|desertnj4smg)$)rx", ATrProj_NJ4SMG_MKD::StaticClass() },
        { R"rx(^(nj5(-?b)?(smg)?)$)rx", ATrProj_NJ5SMG::StaticClass() },
        { R"rx(^(nova|blaster|novablaster)$)rx", ATrProj_NovaColt::StaticClass() },
        { R"rx(^(mx|novablastermx|novamx|blaster(mx)?)$)rx", ATrProj_NovaColt_MKD::StaticClass() },
        { R"rx(^(plasmacannon)$)rx", ATrProj_PlasmaCannon::StaticClass() },
        { R"rx(^(plasmagun|plasma)$)rx", ATrProj_PlasmaGun::StaticClass() },
        { R"rx(^(proximitys?(grenades?)?|proxies|proxys?)$)rx", ATrProj_ProximityGrenade::StaticClass() },
        { R"rx(^(jackal)$)rx", ATrProj_RemoteArxBuster::StaticClass() },
        { R"rx(^(rhino(smg)?)$)rx", ATrProj_RhinoSMG::StaticClass() },
        { R"rx(^(arcticrhino(smg)?)$)rx", ATrProj_RhinoSMG_MKD::StaticClass() },
        { R"rx(^(rocketlauncher)$)rx", ATrProj_RocketLauncher::StaticClass() }, // Trivial regex, actually a spinfusor
        { R"rx(^(saber(launcher)?dumbfire)$)rx", ATrProj_TrackingMissile_DumbFire::StaticClass() }, // Trivial regex
        { R"rx(^(titanlauncher|titan)$)rx", ATrProj_TrackingMissile_MKD::StaticClass() },
        { R"rx(^(sn7(silenced)?(pistol)?)$)rx", ATrProj_SN7::StaticClass() },
        { R"rx(^(arcticsn7(silenced)?(pistol)?)$)rx", ATrProj_SN7_MKD::StaticClass() },
        { R"rx(^(fractals?|fractalgrenades?)$)rx", ATrProj_SpikeGrenade::StaticClass() },
        { R"rx(^(extendedfractals?(grenades?)?)$)rx", ATrProj_SpikeGrenade_MKD::StaticClass() },
        { R"rx(^(gladiator)$)rx", ATrProj_SpikeLauncher::StaticClass() },
        { R"rx(^(blinks?|blinks?fusor|sparespin(fusor)?)$)rx", ATrProj_Spinfusor_100X::StaticClass() },
        { R"rx(^(spinfusormkd)$)rx", ATrProj_SpinfusorD::StaticClass() },
        { R"rx(^(spinfusormk-?x)$)rx", ATrProj_SpinfusorD_MKD::StaticClass() },
        { R"rx(^(stealth(spin)?(fusor)?)$)rx", ATrProj_StealthSpinfusor::StaticClass() },
        { R"rx(^(explosivenitrons?|explosives?)$)rx", ATrProj_STGrenade::StaticClass() },
        { R"rx(^(stickygrenades?xl|stickyxl|stickiesxl)$)rx", ATrProj_StickyGrenade_MKD::StaticClass() },
        { R"rx(^(targetingbeacon)$)rx", ATrProj_TargetingBeacon::StaticClass() }, // Trivial regex, what is this?
        { R"rx(^(tcn4(smg)?)$)rx", ATrProj_TCN4SMG::StaticClass() },
        { R"rx(^(tcn4rockwind(smg)?)$)rx", ATrProj_TCN4SMG_MKD::StaticClass() },
        { R"rx(^(tcng(grenade)?)$)rx", ATrProj_TCNG::StaticClass() },
        { R"rx(^(tcng(quick|short)?-?fuse(grenade)?)$)rx", ATrProj_TCNG_MKD::StaticClass() },
        { R"rx(^(throwingknives|knives)$)rx", ATrProj_ThrowingKnives::StaticClass() },
        { R"rx(^(thumper)$)rx", ATrProj_Thumper::StaticClass() },
        { R"rx(^(thumperd)$)rx", ATrProj_ThumperD::StaticClass() },
        { R"rx(^(thumperdx)$)rx", ATrProj_ThumperD_MKD::StaticClass() },
        { R"rx(^(blackouts?|blackoutgrenades?)$)rx", ATrProj_WhiteOut::StaticClass() },
        { R"rx(^(x1|lmg|x1lmg)$)rx", ATrProj_X1Rifle::StaticClass() },
        { R"rx(^(exr(turret)?)$)rx", ATrProj_AntiAirTurret::StaticClass() }, 
        { R"rx(^(baseturret)$)rx", ATrProj_BaseTurret::StaticClass() }, // Trivial regex
        { R"rx(^(beowulfgunner)$)rx", ATrProj_BeowulfGunner::StaticClass() }, // Trivial regex
        { R"rx(^(beowulfpilot)$)rx", ATrProj_BeowulfPilot::StaticClass() }, // Trivial regex
        { R"rx(^(bxt)$)rx", ATrProj_BXT::StaticClass() }, // Trivial regex
        { R"rx(^(chaingunbullettracer)$)rx", ATrProj_ChaingunBulletTracer::StaticClass() }, // Trivial regex
        { R"rx(^(gravcyclepilot)$)rx", ATrProj_GravCyclePilot::StaticClass() }, // Trivial regex
        { R"rx(^(havocpilot)$)rx", ATrProj_HavocPilot::StaticClass() }, // Trivial regex
        { R"rx(^(hercgunner)$)rx", ATrProj_HERCGunner::StaticClass() }, // Trivial regex
        { R"rx(^(hercpilot)$)rx", ATrProj_HERCPilot::StaticClass() }, // Trivial regex
        { R"rx(^(lightturret)$)rx", ATrProj_LightTurret::StaticClass() }, // Trivial regex
        { R"rx(^(mirv(launcher)?secondary)$)rx", ATrProj_MIRVLauncherSecondary::StaticClass() }, 
        { R"rx(^(clusterecondary)$)rx", ATrProj_MIRVGrenadeSecondary::StaticClass() }, 
        { R"rx(^(pistolbullettracer)$)rx", ATrProj_PistolBulletTracer::StaticClass() }, // Trivial regex
        { R"rx(^(sap20)$)rx", ATrProj_SAP20::StaticClass() }, // Trivial regex
        { R"rx(^(shrikepilot)$)rx", ATrProj_ShrikePilot::StaticClass() }, // Trivial regex
        { R"rx(^(gladiatorsecond(ary)?)$)rx", ATrProj_SpikeLauncherSecondary::StaticClass() }, 
        { R"rx(^(gladiator(third|tertiary))$)rx", ATrProj_SpikeLauncherThird::StaticClass() }, 
        { R"rx(^(wallturret)$)rx", ATrProj_WallTurret::StaticClass() }, // Trivial regex 
    };

    std::map<UClass*, std::string> projectile_class_to_name = {
        { ATrProj_Grenade::StaticClass(), "Frag Grenade" }, 
        { ATrProj_StickyGrenade::StaticClass(), "Sticky Grenade" },
        { ATrProj_Lacerator::StaticClass(), "Lacerator" }, // Trivial regex
        { ATrProj_Mine::StaticClass(), "Mine" },
        { ATrProj_Claymore::StaticClass(), "Claymore" },
        { ATrProj_PrismMine::StaticClass(), "Prism Mine" },
        { ATrProj_RepairDeployable::StaticClass(), "Repair Kit" },
        { ATrProj_ThrowDeployable::StaticClass(), "Throw Deployable" }, // Trivial regex
        { ATrProj_TrackingMissile::StaticClass(), "Saber Launcher" },
        { ATrProj_Tracer::StaticClass(), "Tracer" }, // Trivial regex
        { ATrProj_ClientTracer::StaticClass(), "Client Tracer" }, // Trivial regex
        { ATrProj_CallInBase::StaticClass(), "Callin Base" }, // Trivial regex
        { ATrProj_OrbitalStrike::StaticClass(), "Orbital Strike" }, // Trivial regex //Audio crash?
        { ATrProj_TacticalStrike::StaticClass(), "Tactical Strike" }, // Trivial regex //Audio crash
        { ATrProj_APGrenade::StaticClass(), "AP Grenade" },
        { ATrProj_ARC8::StaticClass(), "ACR8" }, // Trivial regex
        { ATrProj_ArmoredClaymore::StaticClass(), "Motion Mine" },
        { ATrProj_ArxBuster::StaticClass(), "Arx Buster" },
        { ATrProj_ArxBuster_MKD::StaticClass(), "Dust Devil" },
        { ATrProj_ArxShotgun::StaticClass(), "Arx Shotgun" }, // Trivial regex, what is this?
        { ATrProj_AssaultRifle::StaticClass(), "Assault Rifle" },
        { ATrProj_AssaultRifle_MKD::StaticClass(), "Gast's Rifle" },
        { ATrProj_AVMine::StaticClass(), "AV Mine" }, // Trivial regex
        { ATrProj_BoltLauncher::StaticClass(), "Bolt Launcher" },
        { ATrProj_Buckler::StaticClass(), "Buckler" }, // Trivial regex, actually a spinfusor
        { ATrProj_Chaingun::StaticClass(), "Chain Gun" },
        { ATrProj_Chaingun_MKD::StaticClass(), "Chain Cannon" },
        { ATrProj_Claymore_MKD::StaticClass(), "Claymore MKD" }, // Trivial regex
        { ATrProj_ConcussionGrenade::StaticClass(), "Impact Nitron" },
        { ATrProj_ConcussionGrenade_MKD::StaticClass(), "Compact Nitron" },
        { ATrProj_DiskToss::StaticClass(), "Spin Disk" },
        { ATrProj_Spinfusor::StaticClass(), "Spinfusor" },
        { ATrProj_TC24::StaticClass(), "Flak Cannon" },
        { ATrProj_ElfFlak::StaticClass(), "EFG" },
        { ATrProj_EMPGrenade::StaticClass(), "EMP grenade" },
        { ATrProj_EMPGrenade_MKD::StaticClass(), "EMP XL Grenade" },
        { ATrProj_Falcon::StaticClass(), "Falcon" },
        { ATrProj_FlareGrenade::StaticClass(), "Flare grenade" }, 
        { ATrProj_Grenade_MKD::StaticClass(), "Grenade MKD" }, // Trivial regex
        { ATrProj_GrenadeLauncher::StaticClass(), "Grenade Launcher" },
        { ATrProj_GrenadeLauncher_Light::StaticClass(), "Light Grenade Launcher" },
        { ATrProj_GrenadeT5::StaticClass(), "T5 grenade" },
        { ATrProj_GrenadeXL::StaticClass(), "Frag Grenade XL" },
        { ATrProj_GrenadeXL_MKD::StaticClass(), "Short Fuse Frag" },
        { ATrProj_HeavyAPGrenade::StaticClass(), "Heavy AP Grenade" },
        { ATrProj_HeavyAPGrenade_MKD::StaticClass(), "Heavy AP XL Grenade" },
        { ATrProj_HeavyBoltLauncher::StaticClass(), "Heavy Bolt Launcher" },
        { ATrProj_HeavyImpactNitron::StaticClass(), "Heavy Impact Nitron" }, // Trivial regex
        { ATrProj_HeavySpinfusor::StaticClass(), "Heavy Spinfusor" },
        { ATrProj_HeavySpinfusor_MKD::StaticClass(), "Heavy Blinksfusor" },
        { ATrProj_Twinfusor::StaticClass(), "Twinfusor" },
        { ATrProj_HeavyTwinfusor::StaticClass(), "Heavy Twinfusor" },
        { ATrProj_Honorfusor::StaticClass(), "Honorfusor" },
        { ATrProj_ImpactBomblets::StaticClass(), "Impact Bomblets" }, // Trivial regex
        { ATrProj_LightAssaultRifle::StaticClass(), "Light Assault Rifle" },
        { ATrProj_LightSpinfusor::StaticClass(), "Light Spinfusor" },
        { ATrProj_LightSpinfusor_100X::StaticClass(), "Light Blinksfusor" },
        { ATrProj_LightSpinfusor_MKD::StaticClass(), "Dueling Spinfusor" },
        { ATrProj_LightStickyGrenade::StaticClass(), "Heavy Sticky Grenade" },
        { ATrProj_LightTwinfusor::StaticClass(), "Light Twinfusor" },
        { ATrProj_LR1Mortar::StaticClass(), "LR1 Mortar" }, // Trivial regex
        { ATrProj_MIRVGrenade::StaticClass(), "Cluster Grenade" },
        { ATrProj_MIRVLauncher::StaticClass(), "MIRV Launcher" },
        { ATrProj_MortarLauncher::StaticClass(), "Fusion Mortar" },
        { ATrProj_MortarLauncher_MKD::StaticClass(), "Fusion Mortar Deluxe" },
        { ATrProj_MotionSensor::StaticClass(), "Motion Sensor" },
        { ATrProj_NinjaSmoke::StaticClass(), "Chaff Grenade" },
        { ATrProj_NJ4SMG::StaticClass(), "NJ4 SMG" },
        { ATrProj_NJ4SMG_MKD::StaticClass(), "Desert NJ4 SMG" },
        { ATrProj_NJ5SMG::StaticClass(), "NJ5 SMG" },
        { ATrProj_NovaColt::StaticClass(), "Nova Blaster" },
        { ATrProj_NovaColt_MKD::StaticClass(), "Nova Blaster MX" },
        { ATrProj_PlasmaCannon::StaticClass(), "Plasma Cannon" },
        { ATrProj_PlasmaGun::StaticClass(), "Plasma Gun" },
        { ATrProj_ProximityGrenade::StaticClass(), "Proximity Grenade" },
        { ATrProj_RemoteArxBuster::StaticClass(), "Jackal" },
        { ATrProj_RhinoSMG::StaticClass(), "Rhino SMG" },
        { ATrProj_RhinoSMG_MKD::StaticClass(), "Arctic Rhino SMG" },
        { ATrProj_RocketLauncher::StaticClass(), "Rocket Launcher" }, // Trivial regex, actually a spinfusor
        { ATrProj_TrackingMissile_DumbFire::StaticClass(), "Saber Launcher Dumbfire" }, // Trivial regex
        { ATrProj_TrackingMissile_MKD::StaticClass(), "Titan Launcher" },
        { ATrProj_SN7::StaticClass(), "SN7" },
        { ATrProj_SN7_MKD::StaticClass(), "Arctic SN7" },
        { ATrProj_SpikeGrenade::StaticClass(), "Fractal Grenade" },
        { ATrProj_SpikeGrenade_MKD::StaticClass(), "Extended Fractal Grenade" },
        { ATrProj_SpikeLauncher::StaticClass(), "Gladiator" },
        { ATrProj_Spinfusor_100X::StaticClass(), "Blinksfusor" },
        { ATrProj_SpinfusorD::StaticClass(), "Spinfusor MKD" },
        { ATrProj_SpinfusorD_MKD::StaticClass(), "Spinfusor MKX" },
        { ATrProj_StealthSpinfusor::StaticClass(), "Stealth Spinfusor" },
        { ATrProj_STGrenade::StaticClass(), "Explosive Nitron" },
        { ATrProj_StickyGrenade_MKD::StaticClass(), "Sticky Grenade XL" },
        { ATrProj_TargetingBeacon::StaticClass(), "Targeting Beacon" }, // Trivial regex, what is this?
        { ATrProj_TCN4SMG::StaticClass(), "TCN4" },
        { ATrProj_TCN4SMG_MKD::StaticClass(), "TCN4 Rockwind" },
        { ATrProj_TCNG::StaticClass(), "TCNG" },
        { ATrProj_TCNG_MKD::StaticClass(), "TCNG Short Fuse" },
        { ATrProj_ThrowingKnives::StaticClass(), "Throwing Knives" },
        { ATrProj_Thumper::StaticClass(), "Thumper" },
        { ATrProj_ThumperD::StaticClass(), "Thumper D" },
        { ATrProj_ThumperD_MKD::StaticClass(), "Thumper DX" },
        { ATrProj_WhiteOut::StaticClass(), "Blackout Grenade" },
        { ATrProj_X1Rifle::StaticClass(), "X1" },
        { ATrProj_AntiAirTurret::StaticClass(), "EXR Turret" }, 
        { ATrProj_BaseTurret::StaticClass(), "Base Turret" }, // Trivial regex
        { ATrProj_BeowulfGunner::StaticClass(), "Beowulf Gunner" }, // Trivial regex
        { ATrProj_BeowulfPilot::StaticClass(), "Beowulf Pilot" }, // Trivial regex
        { ATrProj_BXT::StaticClass(), "BXT" }, // Trivial regex
        { ATrProj_ChaingunBulletTracer::StaticClass(), "Chain Gun Bullet Tracer" }, // Trivial regex
        { ATrProj_GravCyclePilot::StaticClass(), "Grav Cycle Pilot" }, // Trivial regex
        { ATrProj_HavocPilot::StaticClass(), "Havoc Pilot" }, // Trivial regex
        { ATrProj_HERCGunner::StaticClass(), "HERC Gunner" }, // Trivial regex
        { ATrProj_HERCPilot::StaticClass(), "HERC Pilot" }, // Trivial regex
        { ATrProj_LightTurret::StaticClass(), "Light Turret" }, // Trivial regex
        { ATrProj_MIRVLauncherSecondary::StaticClass(), "MIRV Launcher Secondary" }, 
        { ATrProj_MIRVGrenadeSecondary::StaticClass(), "Cluster Secondary" }, 
        { ATrProj_PistolBulletTracer::StaticClass(), "Pistol Bullet Tracer" }, // Trivial regex
        { ATrProj_SAP20::StaticClass(), "SAP20" }, // Trivial regex
        { ATrProj_ShrikePilot::StaticClass(), "Shrike Pilot" }, // Trivial regex
        { ATrProj_SpikeLauncherSecondary::StaticClass(), "Gladiator Secondary" }, 
        { ATrProj_SpikeLauncherThird::StaticClass(), "Gladiator Tertiary" }, 
        { ATrProj_WallTurret::StaticClass(), "Wall Turret" }, // Trivial regex 
    };

    std::map<std::string, int> subdevices = {
        { R"rx(^(exr(turret)?)$)rx", CONST_SUBDEVICE_ID_EXR_TURRET},
        { R"rx(^(base(turret)?)$)rx", CONST_SUBDEVICE_ID_BASE_TURRET},
        { R"rx(^(forcefield)$)rx", CONST_SUBDEVICE_ID_FORCE_FIELD},
        { R"rx(^((light)?turret)$)rx", CONST_SUBDEVICE_ID_LIGHT_TURRET}, 
    };

    std::map<int, std::string> subdevice_id_to_name = {
        { CONST_SUBDEVICE_ID_EXR_TURRET, "AntiAirTurret"},
        { CONST_SUBDEVICE_ID_BASE_TURRET, "BaseTurret"},
        { CONST_SUBDEVICE_ID_FORCE_FIELD, "ForceField"},
        { CONST_SUBDEVICE_ID_LIGHT_TURRET, "LightTurret"},
    };
}

namespace Data {
    int getItemId(const std::string& className, const std::string &itemName) {
        if (Utils::cleanString(className) == "vehicle")
            return Utils::searchMapId(vehicle_weapons, itemName, "", false);

        if (Utils::cleanString(className) == "subdevice")
            return Utils::searchMapId(subdevices, itemName, "", false);

        int classId = Utils::searchMapId(classes, className, "", false) - 1;
        if (classId == -1) return 0;

        // Try to find this as a weapon
        int res = Utils::searchMapId(weapons[classId], itemName, "", false);
        if (res) return res;

        // Try to find this as a pack
        res = Utils::searchMapId(packs[classId], itemName, "", false);
        if (res) return res;

        // Try to find this as a perk
        res = Utils::searchMapId(perks, itemName, "", false);
        if (res) return res;

        // Try to find this as a skin
        res = Utils::searchMapId(skins[classId], itemName, "", false);
        if (res) return res;

        // Try to find this as a voice
        res = Utils::searchMapId(voices, itemName, "", false);
        if (res) return res;

        Logger::warn("Searched for ID of item %s on class %s and failed to find it", itemName.c_str(), className.c_str());

        return 0;
    }

    static std::vector<int> rankThresholds = {
            CONST_RANK_XP,
            CONST_RANK_XP01,
            CONST_RANK_XP02,
            CONST_RANK_XP03,
            CONST_RANK_XP04,
            CONST_RANK_XP05,
            CONST_RANK_XP06,
            CONST_RANK_XP07,
            CONST_RANK_XP08,
            CONST_RANK_XP09,
            CONST_RANK_XP10,
            CONST_RANK_XP11,
            CONST_RANK_XP12,
            CONST_RANK_XP13,
            CONST_RANK_XP14,
            CONST_RANK_XP15,
            CONST_RANK_XP16,
            CONST_RANK_XP17,
            CONST_RANK_XP18,
            CONST_RANK_XP19,
            CONST_RANK_XP20,
            CONST_RANK_XP21,
            CONST_RANK_XP22,
            CONST_RANK_XP23,
            CONST_RANK_XP24,
            CONST_RANK_XP25,
            CONST_RANK_XP26,
            CONST_RANK_XP27,
            CONST_RANK_XP28,
            CONST_RANK_XP29,
            CONST_RANK_XP30,
            CONST_RANK_XP31,
            CONST_RANK_XP32,
            CONST_RANK_XP33,
            CONST_RANK_XP34,
            CONST_RANK_XP35,
            CONST_RANK_XP36,
            CONST_RANK_XP37,
            CONST_RANK_XP38,
            CONST_RANK_XP39,
            CONST_RANK_XP40,
            CONST_RANK_XP41,
            CONST_RANK_XP42,
            CONST_RANK_XP43,
            CONST_RANK_XP44,
            CONST_RANK_XP45,
            CONST_RANK_XP46,
            CONST_RANK_XP47,
            CONST_RANK_XP48,
            CONST_RANK_XP49,
    };

    UClass* getRankByXp(int rankXp) {
        static TArray<UClass*> rawRankUClasses = UObject::FindAllDuplicateClasses("Class TribesGame.TrRank");
        static std::map<int, UClass*> rankClassMapping;

        int rankNum = 0;
        while (rankNum < rankThresholds.size() && rankXp > rankThresholds[rankNum]) rankNum++;

        if (rankClassMapping.find(rankNum) != rankClassMapping.end()) {
            return rankClassMapping[rankNum];
        }

        for (int i = 0; i < rawRankUClasses.Count; ++i) {
            if (!rawRankUClasses.GetStd(i)) continue;
            UTrRank* rankDef = (UTrRank*)rawRankUClasses.GetStd(i)->Default;
            if (!rankDef) continue;
            if (rankDef->Rank == rankNum) {
                rankClassMapping[rankNum] = rawRankUClasses.GetStd(i);
                return rankClassMapping[rankNum];
            }
        }

        return NULL;
    }

    int getTotalXpByRank(int rankNum, int xp) {
        return rankThresholds[min(rankNum - 1, 49)] + xp;
    }
}


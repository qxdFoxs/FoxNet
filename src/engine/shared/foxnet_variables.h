#ifndef MACRO_CONFIG_INT
#error "The config macros must be defined"
#define MACRO_CONFIG_INT(Name, ScriptName, Def, Min, Max, Save, Desc) ;
#define MACRO_CONFIG_COL(Name, ScriptName, Def, Save, Desc) ;
#define MACRO_CONFIG_STR(Name, ScriptName, Len, Def, Save, Desc) ;
#endif

MACRO_CONFIG_INT(SvSpeed, sv_speed, 0, 0, 4, CFGFLAG_SERVER | CFGFLAG_GAME, "Speed")
MACRO_CONFIG_STR(SvGameTypeName, sv_gametype_name, 64, "FoxNetwork", CFGFLAG_SERVER | CFGFLAG_GAME, "game type name")

MACRO_CONFIG_INT(SvSoloOnSpawn, sv_solo_on_spawn, 1, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Solo the Player for x amount of seconds on spawn")
MACRO_CONFIG_INT(SvSoloOnSpawnSec, sv_solo_on_spawn_seconds, 5, 0, 20, CFGFLAG_SERVER | CFGFLAG_GAME, "Solo the Player for x amount of seconds on spawn")

MACRO_CONFIG_INT(SvCommandOutput, sv_command_output, 1, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "when using a command on someone, it will show them what happened")

MACRO_CONFIG_INT(SvAutoHammer, sv_auto_hammer, 1, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "auto enables guns")
MACRO_CONFIG_INT(SvAutoGun, sv_auto_gun, 1, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "auto enables guns")
MACRO_CONFIG_INT(SvAutoGrenade, sv_auto_grenade, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "auto enables guns")
MACRO_CONFIG_INT(SvAutoLaser, sv_auto_laser, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "auto enables guns")
MACRO_CONFIG_INT(SvAutoShotgun, sv_auto_shotgun, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "auto enables guns")

MACRO_CONFIG_INT(SvAutoExplGun, sv_explgun, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "enables the explosion gun for everyone")

MACRO_CONFIG_INT(SvConfettiGun, sv_confettigun, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Confettigun")

MACRO_CONFIG_INT(SvDisableFreeze, sv_disable_freeze, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "enables the 'better version' of the explosion gun")
MACRO_CONFIG_INT(SvFakeGrenade, sv_fake_grenade, 0, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Grenade doesnt explode")
MACRO_CONFIG_INT(SvWhisperLog, sv_whisper_loh, 1, 0, 1, CFGFLAG_SERVER | CFGFLAG_GAME, "Log Whispers to Remote Console (Rcon)")
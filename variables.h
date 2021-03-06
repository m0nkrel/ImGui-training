#pragma once
#ifndef IMGUI_IMPL_H
#define IMGUI_IMPL_H
#endif

////Visuals

		//Global
		static bool chest_com = false;
		static bool chest_exq = false;
		static bool chest_lux = false;

		static bool w_slime = false;
		static bool ice_bulk = false;
		static bool s_point = false;
		static bool bloat_float = false;

		static bool seelie = false;
		static bool challenge = false;
		static bool oculi = false;
		static bool agate = false;

		static bool ore_met = false;
		static bool ore_cryst = false;
		static bool ore_stone = false;
		static bool ore_electr = false;
		static bool ore_starsilver = false;

		static bool towers = false;
		static bool teleport = false;

		static bool offscreen1 = false;
		static bool offscreen2 = false;
		static bool offscreen3 = false;
		static bool offscreen4 = false;
		static bool offscreen5 = false;
		static bool offscreen6 = false;
		static bool offscreen7 = false;
		static bool offscreen8 = false;
		static bool offscreen9 = false;
		static bool offscreen10 = false;
		static bool offscreen11 = false;
		static bool offscreen12 = false;
		static bool offscreen13 = false;
		static bool offscreen14 = false;
		static bool offscreen15 = false;
		static bool offscreen16 = false;
		static bool offscreen17 = false;
		static bool offscreen18 = false;

		//Locals

		static bool calla_lily = false;
		static bool cecilia = false;
		static bool dandelion = false;
		static bool philanemo = false;
		static bool lamp_grass = false;
		static bool vallberry = false;
		static bool wind_aster = false;
		static bool wolfhook = false;

		static bool glaze_lily = false;
		static bool chili = false;
		static bool qingxin = false;
		static bool silk_flow = false;
		static bool violetgrass = false;
		static bool ore_lapis = false;
		static bool ore_nocjade = false;

		static bool sea_ganodema = false;
		static bool naku_weed = false;
		static bool sakura_bloom = false;
		static bool onikabuto = false;
		static bool dendrobium = false;
		static bool crystal_marrow = false;
		static bool amethyst_lump = false;
		

		static bool offscreen19 = false;
		static bool offscreen20 = false;
		static bool offscreen21 = false;
		static bool offscreen22 = false;
		static bool offscreen23 = false;
		static bool offscreen24 = false;
		static bool offscreen25 = false;
		static bool offscreen26 = false;
		static bool offscreen27 = false;
		static bool offscreen28 = false;
		static bool offscreen29 = false;
		static bool offscreen30 = false;
		static bool offscreen31 = false;
		static bool offscreen32 = false;
		static bool offscreen33 = false;
		static bool offscreen34 = false;
		static bool offscreen35 = false;
		static bool offscreen36 = false;
		static bool offscreen37 = false;
		static bool offscreen38 = false;
		static bool offscreen39 = false;
		static bool offscreen40 = false;

////Player
		static bool noclip = false;
		static bool atkspd = false;
		static bool infult = false;
		static bool cdreduce = false;
		static bool rapfire = false;
		
		float noclip_spd{};
		float attack_spd{};
		float cdreduse_pwr{};
		float rapfire_pwr{};
		char hotkey_speed[128];
		char hotkey_rapfire[128];

////Others
		static bool skip_cutscenes = false;
		static bool speed_dial = false;
		static bool freeze_mobs = false;
		static bool mag_oculus = false;
		static bool mag_agate = false;
		static bool mag_crystal = false;
		static bool mag_metal = false;
		static bool mag_mobs = false;
		
		float mag_mobs_radius{};
		char hotkey_skip_cutscenes[128];
		char hotkey_freeze_mobs[128];
		char hotkey_mag_mobs[128];
		
//Settings
		int lang{ 0 };
class CfgPatches {
    class amp_spotlight {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand";
    };
};

class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	class Spotlight
	{
		//delete;
		class TFTServer
		{
			text = "[ OFFICIAL ] Arma 3 Zeus by Bohemia Interactive (EU) #15"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\amp_spotlight\button.paa"; // Square picture, ideally 512x512
			//video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
			//action = "0 = [_this, '85.190.155.165', '2302', 'yourpasshere'] execVM '\amp_spotlight\joinServer.sqf';";
			action = "0 = [_this, '85.190.155.165', '2302', ''] execVM '\amp_spotlight\joinServer.sqf';";
			actionText = "Join server: [ OFFICIAL ] Arma 3 Zeus by Bohemia Interactive (EU) #15"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
	};
};
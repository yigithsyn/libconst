/*==============================================================================
Print the physcial constants defined in GSL to create an R package
https://www.gnu.org/software/gsl/manual/html_node/Physical-Constants.html
(C) Jens Kleinjung 2016
==============================================================================*/

#include <gsl/gsl_const_mksa.h>
#include <gsl/gsl_const_cgsm.h>
#include <gsl/gsl_const_num.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	fprintf(stdout, "name	value\n");

	/*________________________________________________________________________*/
	/*** 44.1 Fundamental Constants ***/
	fprintf(stdout, "#44.1 Fundamental Constants\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_SPEED_OF_LIGHT",
	GSL_CONST_MKSA_SPEED_OF_LIGHT,
	// The speed of light in vacuum, c.
	"GSL_CONST_MKSA_VACUUM_PERMEABILITY",
	GSL_CONST_MKSA_VACUUM_PERMEABILITY,
    // The permeability of free space, \mu_0. This constant is defined in the MKSA system only.
	"GSL_CONST_MKSA_VACUUM_PERMITTIVITY",
	GSL_CONST_MKSA_VACUUM_PERMITTIVITY,
	// The permittivity of free space, \epsilon_0. This constant is defined in the MKSA system only.
	"GSL_CONST_MKSA_PLANCKS_CONSTANT_H",
	GSL_CONST_MKSA_PLANCKS_CONSTANT_H,
	// Planck’s constant, h.
	"GSL_CONST_MKSA_PLANCKS_CONSTANT_HBAR",
	GSL_CONST_MKSA_PLANCKS_CONSTANT_HBAR,
	// Planck’s constant divided by 2\pi, \hbar.
	"GSL_CONST_NUM_AVOGADRO",
	GSL_CONST_NUM_AVOGADRO,
	// Avogadro’s number, N_a.
	"GSL_CONST_MKSA_FARADAY",
	GSL_CONST_MKSA_FARADAY,
	// The molar charge of 1 Faraday.
	"GSL_CONST_MKSA_BOLTZMANN",
	GSL_CONST_MKSA_BOLTZMANN,
	// The Boltzmann constant, k.
	"GSL_CONST_MKSA_MOLAR_GAS",
	GSL_CONST_MKSA_MOLAR_GAS,
	// The molar gas constant, R_0.
	"GSL_CONST_MKSA_STANDARD_GAS_VOLUME",
	GSL_CONST_MKSA_STANDARD_GAS_VOLUME,
	// The standard gas volume, V_0.
	"GSL_CONST_MKSA_STEFAN_BOLTZMANN_CONSTANT",
	GSL_CONST_MKSA_STEFAN_BOLTZMANN_CONSTANT,
	// The Stefan-Boltzmann radiation constant, \sigma.
	"GSL_CONST_MKSA_GAUSS)",
	GSL_CONST_MKSA_GAUSS);
	// The magnetic field of 1 Gauss.

	/*________________________________________________________________________*/
	/*** 44.2 Astronomy and Astrophysics ***/
	fprintf(stdout, "#44.2 Astronomy and Astrophysics\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_ASTRONOMICAL_UNIT",
	GSL_CONST_MKSA_ASTRONOMICAL_UNIT,
	// The length of 1 astronomical unit (mean earth-sun distance), au.
	"GSL_CONST_MKSA_GRAVITATIONAL_CONSTANT",
	GSL_CONST_MKSA_GRAVITATIONAL_CONSTANT,
	// The gravitational constant, G.
	"GSL_CONST_MKSA_LIGHT_YEAR",
	GSL_CONST_MKSA_LIGHT_YEAR,
	// The distance of 1 light-year, ly.
	"GSL_CONST_MKSA_PARSEC",
	GSL_CONST_MKSA_PARSEC,
	// The distance of 1 parsec, pc.
	"GSL_CONST_MKSA_GRAV_ACCEL",
	GSL_CONST_MKSA_GRAV_ACCEL,
	// The standard gravitational acceleration on Earth, g.
	"GSL_CONST_MKSA_SOLAR_MASS)",
	GSL_CONST_MKSA_SOLAR_MASS);
	// The mass of the Sun. 

	/*________________________________________________________________________*/
	/*** 44.4 Measurement of Time ***/
	fprintf(stdout, "#44.4 Measurement of Time\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_MINUTE",
	GSL_CONST_MKSA_MINUTE,
	// The number of seconds in 1 minute.
	"GSL_CONST_MKSA_HOUR",
	GSL_CONST_MKSA_HOUR,
	// The number of seconds in 1 hour.
	"GSL_CONST_MKSA_DAY",
	GSL_CONST_MKSA_DAY,
	// The number of seconds in 1 day.
	"GSL_CONST_MKSA_WEEK)",
	GSL_CONST_MKSA_WEEK);
	// The number of seconds in 1 week. 

	/*________________________________________________________________________*/
	/*** 44.5 Imperial Units ***/
	fprintf(stdout, "#44.5 Imperial Units\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_INCH",
	GSL_CONST_MKSA_INCH,
	// The length of 1 inch.
	"GSL_CONST_MKSA_FOOT",
	GSL_CONST_MKSA_FOOT,
	// The length of 1 foot.
	"GSL_CONST_MKSA_YARD",
	GSL_CONST_MKSA_YARD,
	// The length of 1 yard.
	"GSL_CONST_MKSA_MILE",
	GSL_CONST_MKSA_MILE,
	// The length of 1 mile.
	"GSL_CONST_MKSA_MIL)",
	GSL_CONST_MKSA_MIL);
	// The length of 1 mil (1/1000th of an inch). 

	/*________________________________________________________________________*/
	/*** 44.6 Speed and Nautical Units ***/
	fprintf(stdout, "#44.6 Speed and Nautical Units\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_KILOMETERS_PER_HOUR",
	GSL_CONST_MKSA_KILOMETERS_PER_HOUR,
	// The speed of 1 kilometer per hour.
	"GSL_CONST_MKSA_MILES_PER_HOUR",
	GSL_CONST_MKSA_MILES_PER_HOUR,
	// The speed of 1 mile per hour.
	"GSL_CONST_MKSA_NAUTICAL_MILE",
	GSL_CONST_MKSA_NAUTICAL_MILE,
	// The length of 1 nautical mile.
	"GSL_CONST_MKSA_FATHOM",
	GSL_CONST_MKSA_FATHOM,
	// The length of 1 fathom.
	"GSL_CONST_MKSA_KNOT)",
	GSL_CONST_MKSA_KNOT);
	// The speed of 1 knot. 

	/*________________________________________________________________________*/
	/*** 44.7 Printers Units ***/
	fprintf(stdout, "#44.7 Printers Units\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n\n",
	"GSL_CONST_MKSA_POINT",
	GSL_CONST_MKSA_POINT,
	// The length of 1 printer’s point (1/72 inch).
	"GSL_CONST_MKSA_TEXPOINT)",
	GSL_CONST_MKSA_TEXPOINT);
	// The length of 1 TeX point (1/72.27 inch). 

	/*________________________________________________________________________*/
	/*** 44.8 Volume, Area and Length ***/
	fprintf(stdout, "#44.8 Volume, Area and Length\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_MICRON",
	GSL_CONST_MKSA_MICRON,
	// The length of 1 micron.
	"GSL_CONST_MKSA_HECTARE",
	GSL_CONST_MKSA_HECTARE,
	// The area of 1 hectare.
	"GSL_CONST_MKSA_ACRE",
	GSL_CONST_MKSA_ACRE,
	// The area of 1 acre.
	"GSL_CONST_MKSA_LITER",
	GSL_CONST_MKSA_LITER,
	// The volume of 1 liter.
	"GSL_CONST_MKSA_US_GALLON",
	GSL_CONST_MKSA_US_GALLON,
	// The volume of 1 US gallon.
	"GSL_CONST_MKSA_CANADIAN_GALLON",
	GSL_CONST_MKSA_CANADIAN_GALLON,
	// The volume of 1 Canadian gallon.
	"GSL_CONST_MKSA_UK_GALLON",
	GSL_CONST_MKSA_UK_GALLON,
	// The volume of 1 UK gallon.
	"GSL_CONST_MKSA_QUART",
	GSL_CONST_MKSA_QUART,
	// The volume of 1 quart.
	"GSL_CONST_MKSA_PINT)",
	GSL_CONST_MKSA_PINT);
	// The volume of 1 pint. 

	/*________________________________________________________________________*/
	/*** 44.9 Mass and Weight ***/
	fprintf(stdout, "#44.9 Mass and Weight\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_POUND_MASS",
	GSL_CONST_MKSA_POUND_MASS,
	// The mass of 1 pound.
	"GSL_CONST_MKSA_OUNCE_MASS",
	GSL_CONST_MKSA_OUNCE_MASS,
	// The mass of 1 ounce.
	"GSL_CONST_MKSA_TON",
	GSL_CONST_MKSA_TON,
	// The mass of 1 ton.
	"GSL_CONST_MKSA_METRIC_TON",
	GSL_CONST_MKSA_METRIC_TON,
	// The mass of 1 metric ton (1000 kg).
	"GSL_CONST_MKSA_UK_TON",
	GSL_CONST_MKSA_UK_TON,
	// The mass of 1 UK ton.
	"GSL_CONST_MKSA_TROY_OUNCE",
	GSL_CONST_MKSA_TROY_OUNCE,
	// The mass of 1 troy ounce.
	"GSL_CONST_MKSA_CARAT",
	GSL_CONST_MKSA_CARAT,
	// The mass of 1 carat.
	"GSL_CONST_MKSA_GRAM_FORCE",
	GSL_CONST_MKSA_GRAM_FORCE,
	// The force of 1 gram weight.
	"GSL_CONST_MKSA_POUND_FORCE",
	GSL_CONST_MKSA_POUND_FORCE,
	// The force of 1 pound weight.
	"GSL_CONST_MKSA_KILOPOUND_FORCE",
	GSL_CONST_MKSA_KILOPOUND_FORCE,
	// The force of 1 kilopound weight.
	"GSL_CONST_MKSA_POUNDAL)",
	GSL_CONST_MKSA_POUNDAL);
	// The force of 1 poundal. 

	/*________________________________________________________________________*/
	/*** 44.9 Mass and Weight ***/
	fprintf(stdout, "#44.9 Mass and Weight\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_POUND_MASS",
	GSL_CONST_MKSA_POUND_MASS,
	// The mass of 1 pound.
	"GSL_CONST_MKSA_OUNCE_MASS",
	GSL_CONST_MKSA_OUNCE_MASS,
	// The mass of 1 ounce.
	"GSL_CONST_MKSA_TON",
	GSL_CONST_MKSA_TON,
	// The mass of 1 ton.
	"GSL_CONST_MKSA_METRIC_TON",
	GSL_CONST_MKSA_METRIC_TON,
	// The mass of 1 metric ton (1000 kg).
	"GSL_CONST_MKSA_UK_TON",
	GSL_CONST_MKSA_UK_TON,
	// The mass of 1 UK ton.
	"GSL_CONST_MKSA_TROY_OUNCE",
	GSL_CONST_MKSA_TROY_OUNCE,
	// The mass of 1 troy ounce.
	"GSL_CONST_MKSA_CARAT",
	GSL_CONST_MKSA_CARAT,
	// The mass of 1 carat.
	"GSL_CONST_MKSA_GRAM_FORCE",
	GSL_CONST_MKSA_GRAM_FORCE,
	// The force of 1 gram weight.
	"GSL_CONST_MKSA_POUND_FORCE",
	GSL_CONST_MKSA_POUND_FORCE,
	// The force of 1 pound weight.
	"GSL_CONST_MKSA_KILOPOUND_FORCE",
	GSL_CONST_MKSA_KILOPOUND_FORCE,
	// The force of 1 kilopound weight.
	"GSL_CONST_MKSA_POUNDAL)",
	GSL_CONST_MKSA_POUNDAL);
	// The force of 1 poundal. 

	/*________________________________________________________________________*/
	/*** 44.11 Pressure ***/
	fprintf(stdout, "#44.11 Pressure\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_BAR",
	GSL_CONST_MKSA_BAR,
	// The pressure of 1 bar.
	"GSL_CONST_MKSA_STD_ATMOSPHERE",
	GSL_CONST_MKSA_STD_ATMOSPHERE,
	// The pressure of 1 standard atmosphere.
	"GSL_CONST_MKSA_TORR",
	GSL_CONST_MKSA_TORR,
	// The pressure of 1 torr.
	"GSL_CONST_MKSA_METER_OF_MERCURY",
	GSL_CONST_MKSA_METER_OF_MERCURY,
	// The pressure of 1 meter of mercury.
	"GSL_CONST_MKSA_INCH_OF_MERCURY",
	GSL_CONST_MKSA_INCH_OF_MERCURY,
	// The pressure of 1 inch of mercury.
	"GSL_CONST_MKSA_INCH_OF_WATER",
	GSL_CONST_MKSA_INCH_OF_WATER,
	// The pressure of 1 inch of water.
	"GSL_CONST_MKSA_PSI)",
	GSL_CONST_MKSA_PSI);
	// The pressure of 1 pound per square inch. 

	/*________________________________________________________________________*/
	/*** 44.12 Viscosity ***/
	fprintf(stdout, "#44.12 Viscosity\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_POISE",
	GSL_CONST_MKSA_POISE,
	// The dynamic viscosity of 1 poise.
	"GSL_CONST_MKSA_STOKES)",
	GSL_CONST_MKSA_STOKES);
	// The kinematic viscosity of 1 stokes. 

	/*________________________________________________________________________*/
	/*** 44.13 Light and Illumination ***/
	fprintf(stdout, "#44.13 Light and Illumination\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_STILB",
	GSL_CONST_MKSA_STILB,
	// The luminance of 1 stilb.
	"GSL_CONST_MKSA_LUMEN",
	GSL_CONST_MKSA_LUMEN,
	// The luminous flux of 1 lumen.
	"GSL_CONST_MKSA_LUX",
	GSL_CONST_MKSA_LUX,
	// The illuminance of 1 lux.
	"GSL_CONST_MKSA_PHOT",
	GSL_CONST_MKSA_PHOT,
	// The illuminance of 1 phot.
	"GSL_CONST_MKSA_FOOTCANDLE",
	GSL_CONST_MKSA_FOOTCANDLE,
	// The illuminance of 1 footcandle.
	"GSL_CONST_MKSA_LAMBERT",
	GSL_CONST_MKSA_LAMBERT,
	// The luminance of 1 lambert.
	"GSL_CONST_MKSA_FOOTLAMBERT)",
	GSL_CONST_MKSA_FOOTLAMBERT);
	// The luminance of 1 footlambert. 

	/*________________________________________________________________________*/
	/*** 44.14 Radioactivity ***/
	fprintf(stdout, "#44.14 Radioactivity\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_CURIE",
	GSL_CONST_MKSA_CURIE,
	// The activity of 1 curie.
	"GSL_CONST_MKSA_ROENTGEN",
	GSL_CONST_MKSA_ROENTGEN,
	// The exposure of 1 roentgen.
	"GSL_CONST_MKSA_RAD)",
	GSL_CONST_MKSA_RAD);
	// The absorbed dose of 1 rad. 

	/*________________________________________________________________________*/
	/*** 44.15 Force and Energy ***/
	fprintf(stdout, "#44.15 Force and Energy\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_MKSA_NEWTON",
	GSL_CONST_MKSA_NEWTON,
	// The SI unit of force, 1 Newton.
	"GSL_CONST_MKSA_DYNE",
	GSL_CONST_MKSA_DYNE,
	// The force of 1 Dyne = 10^-5 Newton.
	"GSL_CONST_MKSA_JOULE",
	GSL_CONST_MKSA_JOULE,
	// The SI unit of energy, 1 Joule.
	"GSL_CONST_MKSA_ERG)",
	GSL_CONST_MKSA_ERG);
	// The energy 1 erg = 10^-7 Joule. 

	/*________________________________________________________________________*/
	/*** 44.16 Prefixes ***/
	fprintf(stdout, "#44.16 Prefixes\n");

	fprintf(stdout, "%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n%s\t%13.12e\n",
	"GSL_CONST_NUM_YOTTA",
	GSL_CONST_NUM_YOTTA,
	// 10^24
	"GSL_CONST_NUM_ZETTA",
	GSL_CONST_NUM_ZETTA,
	// 10^21
	"GSL_CONST_NUM_EXA",
	GSL_CONST_NUM_EXA,
	// 10^18
	"GSL_CONST_NUM_PETA",
	GSL_CONST_NUM_PETA,
	// 10^15
	"GSL_CONST_NUM_TERA",
	GSL_CONST_NUM_TERA,
	// 10^12
	"GSL_CONST_NUM_GIGA",
	GSL_CONST_NUM_GIGA,
	// 10^9
	"GSL_CONST_NUM_MEGA",
	GSL_CONST_NUM_MEGA,
	// 10^6
	"GSL_CONST_NUM_KILO",
	GSL_CONST_NUM_KILO,
	// 10^3
	"GSL_CONST_NUM_MILLI",
	GSL_CONST_NUM_MILLI,
	// 10^-3
	"GSL_CONST_NUM_MICRO",
	GSL_CONST_NUM_MICRO,
	// 10^-6
	"GSL_CONST_NUM_NANO",
	GSL_CONST_NUM_NANO,
	// 10^-9
	"GSL_CONST_NUM_PICO",
	GSL_CONST_NUM_PICO,
	// 10^-12
	"GSL_CONST_NUM_FEMTO",
	GSL_CONST_NUM_FEMTO,
	// 10^-15
	"GSL_CONST_NUM_ATTO",
	GSL_CONST_NUM_ATTO,
	// 10^-18
	"GSL_CONST_NUM_ZEPTO",
	GSL_CONST_NUM_ZEPTO,
	// 10^-21
	"GSL_CONST_NUM_YOCTO)",
	GSL_CONST_NUM_YOCTO);
	// 10^-24

	/*________________________________________________________________________*/
	return 0;
}

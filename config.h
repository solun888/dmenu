/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const float alpha = 0.8;

static char normbgcolor[]           = "#222222";
static char normfgcolor[]           = "#bbbbbb";
static char selfgcolor[]            = "#eeeeee";
static char selbgcolor[]            = "#005577";
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[]			= "monospace:size=10";
static char *fonts[] = { font };

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "normfgcolor", "normbgcolor" },
	[SchemeSel] = { "selfgcolor", "selbgcolor" },
	[SchemeOut] = { "#000000", "#00ffff" },
};

static  const float  alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "normfgcolor", STRING, &normfgcolor },
	{ "normbgcolor", STRING, &normbgcolor },
	{ "selfgcolor",  STRING, &selfgcolor },
	{ "selbgcolor",  STRING, &selbgcolor },
	{ "alpha",       FLOAT,  &alpha },
	{ "prompt",      STRING, &prompt },
};

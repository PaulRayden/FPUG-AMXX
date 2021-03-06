#if defined _pug_include
	#endinput
#endif
#define _pug_include
enum PUG_STATE
{
	NO_ALIVE = 0,
	VOTING,
	COMMENCING,
	ALIVE,
	ENDING
}
enum PUG_EVENTS
{
	PUG_START = 0, /*(void)*/
	ALL_PLAYER_IS_READY, /*(void)*/
	ROUND_START, /*(void)*/
	ROUND_END, /*(TeamName:win_team)*/
	PUG_END /*(TeamName:win_team)*/
}
native PugRegisterCommand(name[], fwd[], flags = -1, PUG_STATE:pugstate = NO_ALIVE);
native PugNextVote();
native PugRegisterVote(name[], function[]);
native PugRegisterVoteOption(option[]);
native PugStart();
native register_pug_event(PUG_EVENTS:event, const function[]);
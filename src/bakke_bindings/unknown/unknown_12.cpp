#include "pch.h"
#include <bakkesmod/wrappers/Engine/EngineTAWrapper.h>
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/SaveData/GameEditorSaveDataWrapper.h>
#include <bakkesmod/wrappers/GameEvent/SaveData/TrainingEditorSaveDataWrapper.h>
#include <bakkesmod/wrappers/GameEvent/TrainingEditorWrapper.h>
#include <bakkesmod/wrappers/GameObject/BaseCameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_12(py::module &M)
{
	{ // SaveDataWrapper file: line:8
		pybind11::class_<SaveDataWrapper, std::shared_ptr<SaveDataWrapper>, ObjectWrapper> cl(M, "SaveDataWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](SaveDataWrapper const &o){ return new SaveDataWrapper(o); } ) );
		cl.def("assign", (class SaveDataWrapper & (SaveDataWrapper::*)(class SaveDataWrapper)) &SaveDataWrapper::operator=, "C++: SaveDataWrapper::operator=(class SaveDataWrapper) --> class SaveDataWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetDirectoryPath", (class UnrealStringWrapper (SaveDataWrapper::*)()) &SaveDataWrapper::GetDirectoryPath, "C++: SaveDataWrapper::GetDirectoryPath() --> class UnrealStringWrapper");
		cl.def("GetSaveType", (class UnrealStringWrapper (SaveDataWrapper::*)()) &SaveDataWrapper::GetSaveType, "C++: SaveDataWrapper::GetSaveType() --> class UnrealStringWrapper");
		cl.def("GetSaveExt", (class UnrealStringWrapper (SaveDataWrapper::*)()) &SaveDataWrapper::GetSaveExt, "C++: SaveDataWrapper::GetSaveExt() --> class UnrealStringWrapper");
		cl.def("GetbExactFileMatch", (unsigned long (SaveDataWrapper::*)()) &SaveDataWrapper::GetbExactFileMatch, "C++: SaveDataWrapper::GetbExactFileMatch() --> unsigned long");
		cl.def("SetbExactFileMatch", (void (SaveDataWrapper::*)(unsigned long)) &SaveDataWrapper::SetbExactFileMatch, "C++: SaveDataWrapper::SetbExactFileMatch(unsigned long) --> void", pybind11::arg("newbExactFileMatch"));
		cl.def("Init", (void (SaveDataWrapper::*)()) &SaveDataWrapper::Init, "C++: SaveDataWrapper::Init() --> void");
	}
	{ // GameEditorSaveDataWrapper file:bakkesmod/wrappers/GameEvent/SaveData/GameEditorSaveDataWrapper.h line:9
		pybind11::class_<GameEditorSaveDataWrapper, std::shared_ptr<GameEditorSaveDataWrapper>, SaveDataWrapper> cl(M, "GameEditorSaveDataWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](GameEditorSaveDataWrapper const &o){ return new GameEditorSaveDataWrapper(o); } ) );
		cl.def("assign", (class GameEditorSaveDataWrapper & (GameEditorSaveDataWrapper::*)(class GameEditorSaveDataWrapper)) &GameEditorSaveDataWrapper::operator=, "C++: GameEditorSaveDataWrapper::operator=(class GameEditorSaveDataWrapper) --> class GameEditorSaveDataWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetLoadedSaveName", (class UnrealStringWrapper (GameEditorSaveDataWrapper::*)()) &GameEditorSaveDataWrapper::GetLoadedSaveName, "C++: GameEditorSaveDataWrapper::GetLoadedSaveName() --> class UnrealStringWrapper");
		cl.def("GetTrainingData", (class TrainingEditorSaveDataWrapper (GameEditorSaveDataWrapper::*)()) &GameEditorSaveDataWrapper::GetTrainingData, "C++: GameEditorSaveDataWrapper::GetTrainingData() --> class TrainingEditorSaveDataWrapper");
		cl.def("SetTrainingData", (void (GameEditorSaveDataWrapper::*)(class TrainingEditorSaveDataWrapper)) &GameEditorSaveDataWrapper::SetTrainingData, "C++: GameEditorSaveDataWrapper::SetTrainingData(class TrainingEditorSaveDataWrapper) --> void", pybind11::arg("newTrainingData"));
		cl.def("GetPlayerTeamNumber", (int (GameEditorSaveDataWrapper::*)()) &GameEditorSaveDataWrapper::GetPlayerTeamNumber, "C++: GameEditorSaveDataWrapper::GetPlayerTeamNumber() --> int");
		cl.def("SetPlayerTeamNumber", (void (GameEditorSaveDataWrapper::*)(int)) &GameEditorSaveDataWrapper::SetPlayerTeamNumber, "C++: GameEditorSaveDataWrapper::SetPlayerTeamNumber(int) --> void", pybind11::arg("newPlayerTeamNumber"));
		cl.def("GetbUnowned", (unsigned long (GameEditorSaveDataWrapper::*)()) &GameEditorSaveDataWrapper::GetbUnowned, "C++: GameEditorSaveDataWrapper::GetbUnowned() --> unsigned long");
		cl.def("SetbUnowned", (void (GameEditorSaveDataWrapper::*)(unsigned long)) &GameEditorSaveDataWrapper::SetbUnowned, "C++: GameEditorSaveDataWrapper::SetbUnowned(unsigned long) --> void", pybind11::arg("newbUnowned"));
		cl.def("GetShotsCompleted", (int (GameEditorSaveDataWrapper::*)()) &GameEditorSaveDataWrapper::GetShotsCompleted, "C++: GameEditorSaveDataWrapper::GetShotsCompleted() --> int");
		cl.def("SetShotsCompleted", (void (GameEditorSaveDataWrapper::*)(int)) &GameEditorSaveDataWrapper::SetShotsCompleted, "C++: GameEditorSaveDataWrapper::SetShotsCompleted(int) --> void", pybind11::arg("newShotsCompleted"));
		cl.def("GetFavoritesFolderPath", (class UnrealStringWrapper (GameEditorSaveDataWrapper::*)()) &GameEditorSaveDataWrapper::GetFavoritesFolderPath, "C++: GameEditorSaveDataWrapper::GetFavoritesFolderPath() --> class UnrealStringWrapper");
		cl.def("GetMyTrainingFolderPath", (class UnrealStringWrapper (GameEditorSaveDataWrapper::*)()) &GameEditorSaveDataWrapper::GetMyTrainingFolderPath, "C++: GameEditorSaveDataWrapper::GetMyTrainingFolderPath() --> class UnrealStringWrapper");
		cl.def("GetDownloadedFolderPath", (class UnrealStringWrapper (GameEditorSaveDataWrapper::*)()) &GameEditorSaveDataWrapper::GetDownloadedFolderPath, "C++: GameEditorSaveDataWrapper::GetDownloadedFolderPath() --> class UnrealStringWrapper");
		cl.def("GetTrainingSaveType", (unsigned char (GameEditorSaveDataWrapper::*)(unsigned long, unsigned long)) &GameEditorSaveDataWrapper::GetTrainingSaveType, "C++: GameEditorSaveDataWrapper::GetTrainingSaveType(unsigned long, unsigned long) --> unsigned char", pybind11::arg("bOwned"), pybind11::arg("bFavorited"));
		cl.def("Init", (void (GameEditorSaveDataWrapper::*)()) &GameEditorSaveDataWrapper::Init, "C++: GameEditorSaveDataWrapper::Init() --> void");
	}
	{ // TrainingEditorSaveDataWrapper file:bakkesmod/wrappers/GameEvent/SaveData/TrainingEditorSaveDataWrapper.h line:8
		pybind11::class_<TrainingEditorSaveDataWrapper, std::shared_ptr<TrainingEditorSaveDataWrapper>, ObjectWrapper> cl(M, "TrainingEditorSaveDataWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TrainingEditorSaveDataWrapper const &o){ return new TrainingEditorSaveDataWrapper(o); } ) );
		cl.def("assign", (class TrainingEditorSaveDataWrapper & (TrainingEditorSaveDataWrapper::*)(class TrainingEditorSaveDataWrapper)) &TrainingEditorSaveDataWrapper::operator=, "C++: TrainingEditorSaveDataWrapper::operator=(class TrainingEditorSaveDataWrapper) --> class TrainingEditorSaveDataWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetCode", (class UnrealStringWrapper (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::GetCode, "C++: TrainingEditorSaveDataWrapper::GetCode() --> class UnrealStringWrapper");
		cl.def("GetTM_Name", (class UnrealStringWrapper (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::GetTM_Name, "C++: TrainingEditorSaveDataWrapper::GetTM_Name() --> class UnrealStringWrapper");
		cl.def("GetType", (unsigned char (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::GetType, "C++: TrainingEditorSaveDataWrapper::GetType() --> unsigned char");
		cl.def("SetType", (void (TrainingEditorSaveDataWrapper::*)(unsigned char)) &TrainingEditorSaveDataWrapper::SetType, "C++: TrainingEditorSaveDataWrapper::SetType(unsigned char) --> void", pybind11::arg("newType"));
		cl.def("GetDifficulty", (unsigned char (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::GetDifficulty, "C++: TrainingEditorSaveDataWrapper::GetDifficulty() --> unsigned char");
		cl.def("SetDifficulty", (void (TrainingEditorSaveDataWrapper::*)(unsigned char)) &TrainingEditorSaveDataWrapper::SetDifficulty, "C++: TrainingEditorSaveDataWrapper::SetDifficulty(unsigned char) --> void", pybind11::arg("newDifficulty"));
		cl.def("GetCreatorName", (class UnrealStringWrapper (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::GetCreatorName, "C++: TrainingEditorSaveDataWrapper::GetCreatorName() --> class UnrealStringWrapper");
		cl.def("GetDescription", (class UnrealStringWrapper (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::GetDescription, "C++: TrainingEditorSaveDataWrapper::GetDescription() --> class UnrealStringWrapper");
		cl.def("GetNumRounds", (int (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::GetNumRounds, "C++: TrainingEditorSaveDataWrapper::GetNumRounds() --> int");
		cl.def("SetNumRounds", (void (TrainingEditorSaveDataWrapper::*)(int)) &TrainingEditorSaveDataWrapper::SetNumRounds, "C++: TrainingEditorSaveDataWrapper::SetNumRounds(int) --> void", pybind11::arg("newNumRounds"));
		cl.def("GetCreatedAt", (unsigned long long (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::GetCreatedAt, "C++: TrainingEditorSaveDataWrapper::GetCreatedAt() --> unsigned long long");
		cl.def("SetCreatedAt", (void (TrainingEditorSaveDataWrapper::*)(unsigned long long)) &TrainingEditorSaveDataWrapper::SetCreatedAt, "C++: TrainingEditorSaveDataWrapper::SetCreatedAt(unsigned long long) --> void", pybind11::arg("newCreatedAt"));
		cl.def("GetUpdatedAt", (unsigned long long (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::GetUpdatedAt, "C++: TrainingEditorSaveDataWrapper::GetUpdatedAt() --> unsigned long long");
		cl.def("SetUpdatedAt", (void (TrainingEditorSaveDataWrapper::*)(unsigned long long)) &TrainingEditorSaveDataWrapper::SetUpdatedAt, "C++: TrainingEditorSaveDataWrapper::SetUpdatedAt(unsigned long long) --> void", pybind11::arg("newUpdatedAt"));
		cl.def("GetCreatorPlayerID", (struct SteamID (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::GetCreatorPlayerID, "C++: TrainingEditorSaveDataWrapper::GetCreatorPlayerID() --> struct SteamID");
		cl.def("SetCreatorPlayerID", (void (TrainingEditorSaveDataWrapper::*)(struct SteamID)) &TrainingEditorSaveDataWrapper::SetCreatorPlayerID, "C++: TrainingEditorSaveDataWrapper::SetCreatorPlayerID(struct SteamID) --> void", pybind11::arg("newCreatorPlayerID"));
		cl.def("Init", (void (TrainingEditorSaveDataWrapper::*)()) &TrainingEditorSaveDataWrapper::Init, "C++: TrainingEditorSaveDataWrapper::Init() --> void");
	}
	{ // TrainingEditorWrapper file:bakkesmod/wrappers/GameEvent/TrainingEditorWrapper.h line:12
		pybind11::class_<TrainingEditorWrapper, std::shared_ptr<TrainingEditorWrapper>, GameEditorWrapper> cl(M, "TrainingEditorWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TrainingEditorWrapper const &o){ return new TrainingEditorWrapper(o); } ) );
		cl.def("assign", (class TrainingEditorWrapper & (TrainingEditorWrapper::*)(class TrainingEditorWrapper)) &TrainingEditorWrapper::operator=, "C++: TrainingEditorWrapper::operator=(class TrainingEditorWrapper) --> class TrainingEditorWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetMinRoundTime", (float (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetMinRoundTime, "C++: TrainingEditorWrapper::GetMinRoundTime() --> float");
		cl.def("SetMinRoundTime", (void (TrainingEditorWrapper::*)(float)) &TrainingEditorWrapper::SetMinRoundTime, "C++: TrainingEditorWrapper::SetMinRoundTime(float) --> void", pybind11::arg("newMinRoundTime"));
		cl.def("GetMaxRoundTime", (float (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetMaxRoundTime, "C++: TrainingEditorWrapper::GetMaxRoundTime() --> float");
		cl.def("SetMaxRoundTime", (void (TrainingEditorWrapper::*)(float)) &TrainingEditorWrapper::SetMaxRoundTime, "C++: TrainingEditorWrapper::SetMaxRoundTime(float) --> void", pybind11::arg("newMaxRoundTime"));
		cl.def("GetbNoEditor", (unsigned long (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetbNoEditor, "C++: TrainingEditorWrapper::GetbNoEditor() --> unsigned long");
		cl.def("SetbNoEditor", (void (TrainingEditorWrapper::*)(unsigned long)) &TrainingEditorWrapper::SetbNoEditor, "C++: TrainingEditorWrapper::SetbNoEditor(unsigned long) --> void", pybind11::arg("newbNoEditor"));
		cl.def("GetbDisplayedRedoPenaltyMessage", (unsigned long (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetbDisplayedRedoPenaltyMessage, "C++: TrainingEditorWrapper::GetbDisplayedRedoPenaltyMessage() --> unsigned long");
		cl.def("SetbDisplayedRedoPenaltyMessage", (void (TrainingEditorWrapper::*)(unsigned long)) &TrainingEditorWrapper::SetbDisplayedRedoPenaltyMessage, "C++: TrainingEditorWrapper::SetbDisplayedRedoPenaltyMessage(unsigned long) --> void", pybind11::arg("newbDisplayedRedoPenaltyMessage"));
		cl.def("GetbUnsavedChanges", (unsigned long (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetbUnsavedChanges, "C++: TrainingEditorWrapper::GetbUnsavedChanges() --> unsigned long");
		cl.def("SetbUnsavedChanges", (void (TrainingEditorWrapper::*)(unsigned long)) &TrainingEditorWrapper::SetbUnsavedChanges, "C++: TrainingEditorWrapper::SetbUnsavedChanges(unsigned long) --> void", pybind11::arg("newbUnsavedChanges"));
		cl.def("GetPointsScoredThisRound", (int (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetPointsScoredThisRound, "C++: TrainingEditorWrapper::GetPointsScoredThisRound() --> int");
		cl.def("SetPointsScoredThisRound", (void (TrainingEditorWrapper::*)(int)) &TrainingEditorWrapper::SetPointsScoredThisRound, "C++: TrainingEditorWrapper::SetPointsScoredThisRound(int) --> void", pybind11::arg("newPointsScoredThisRound"));
		cl.def("GetShotAttempt", (int (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetShotAttempt, "C++: TrainingEditorWrapper::GetShotAttempt() --> int");
		cl.def("SetShotAttempt", (void (TrainingEditorWrapper::*)(int)) &TrainingEditorWrapper::SetShotAttempt, "C++: TrainingEditorWrapper::SetShotAttempt(int) --> void", pybind11::arg("newShotAttempt"));
		cl.def("GetGoalieScore", (int (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetGoalieScore, "C++: TrainingEditorWrapper::GetGoalieScore() --> int");
		cl.def("SetGoalieScore", (void (TrainingEditorWrapper::*)(int)) &TrainingEditorWrapper::SetGoalieScore, "C++: TrainingEditorWrapper::SetGoalieScore(int) --> void", pybind11::arg("newGoalieScore"));
		cl.def("GetPlayTestType", (unsigned char (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetPlayTestType, "C++: TrainingEditorWrapper::GetPlayTestType() --> unsigned char");
		cl.def("SetPlayTestType", (void (TrainingEditorWrapper::*)(unsigned char)) &TrainingEditorWrapper::SetPlayTestType, "C++: TrainingEditorWrapper::SetPlayTestType(unsigned char) --> void", pybind11::arg("newPlayTestType"));
		cl.def("GetGoalMeshBlockers", (class ArrayWrapper<class ActorWrapper> (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetGoalMeshBlockers, "C++: TrainingEditorWrapper::GetGoalMeshBlockers() --> class ArrayWrapper<class ActorWrapper>");
		cl.def("GetGoalMeshBlockerArchetype", (class ActorWrapper (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetGoalMeshBlockerArchetype, "C++: TrainingEditorWrapper::GetGoalMeshBlockerArchetype() --> class ActorWrapper");
		cl.def("SetGoalMeshBlockerArchetype", (void (TrainingEditorWrapper::*)(class ActorWrapper)) &TrainingEditorWrapper::SetGoalMeshBlockerArchetype, "C++: TrainingEditorWrapper::SetGoalMeshBlockerArchetype(class ActorWrapper) --> void", pybind11::arg("newGoalMeshBlockerArchetype"));
		cl.def("GetTrainingData", (class GameEditorSaveDataWrapper (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetTrainingData, "C++: TrainingEditorWrapper::GetTrainingData() --> class GameEditorSaveDataWrapper");
		cl.def("SetTrainingData", (void (TrainingEditorWrapper::*)(class GameEditorSaveDataWrapper)) &TrainingEditorWrapper::SetTrainingData, "C++: TrainingEditorWrapper::SetTrainingData(class GameEditorSaveDataWrapper) --> void", pybind11::arg("newTrainingData"));
		cl.def("GetSaveDelayTime", (float (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetSaveDelayTime, "C++: TrainingEditorWrapper::GetSaveDelayTime() --> float");
		cl.def("SetSaveDelayTime", (void (TrainingEditorWrapper::*)(float)) &TrainingEditorWrapper::SetSaveDelayTime, "C++: TrainingEditorWrapper::SetSaveDelayTime(float) --> void", pybind11::arg("newSaveDelayTime"));
		cl.def("GetSaveCooldown", (float (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetSaveCooldown, "C++: TrainingEditorWrapper::GetSaveCooldown() --> float");
		cl.def("SetSaveCooldown", (void (TrainingEditorWrapper::*)(float)) &TrainingEditorWrapper::SetSaveCooldown, "C++: TrainingEditorWrapper::SetSaveCooldown(float) --> void", pybind11::arg("newSaveCooldown"));
		cl.def("GetTrainingFileName", (class UnrealStringWrapper (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetTrainingFileName, "C++: TrainingEditorWrapper::GetTrainingFileName() --> class UnrealStringWrapper");
		cl.def("OnLoadingMovieClosed", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::OnLoadingMovieClosed, "C++: TrainingEditorWrapper::OnLoadingMovieClosed() --> void");
		cl.def("TagHistoryChanges", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::TagHistoryChanges, "C++: TrainingEditorWrapper::TagHistoryChanges() --> void");
		cl.def("MarkAsDirty", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::MarkAsDirty, "C++: TrainingEditorWrapper::MarkAsDirty() --> void");
		cl.def("ForceTagHistoryChanges", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::ForceTagHistoryChanges, "C++: TrainingEditorWrapper::ForceTagHistoryChanges() --> void");
		cl.def("SetTracedCrosshairActor", (void (TrainingEditorWrapper::*)(class PlayerControllerWrapper, class ActorWrapper)) &TrainingEditorWrapper::SetTracedCrosshairActor, "C++: TrainingEditorWrapper::SetTracedCrosshairActor(class PlayerControllerWrapper, class ActorWrapper) --> void", pybind11::arg("PC"), pybind11::arg("NewActor"));
		cl.def("DestroyBall", (bool (TrainingEditorWrapper::*)(class BallWrapper)) &TrainingEditorWrapper::DestroyBall, "C++: TrainingEditorWrapper::DestroyBall(class BallWrapper) --> bool", pybind11::arg("Ball"));
		cl.def("AllowDynamicCrowd", (bool (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::AllowDynamicCrowd, "C++: TrainingEditorWrapper::AllowDynamicCrowd() --> bool");
		cl.def("BroadcastGoMessage", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::BroadcastGoMessage, "C++: TrainingEditorWrapper::BroadcastGoMessage() --> void");
		cl.def("GetTotalRounds", (int (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetTotalRounds, "C++: TrainingEditorWrapper::GetTotalRounds() --> int");
		cl.def("GetDifficulty", (unsigned char (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetDifficulty, "C++: TrainingEditorWrapper::GetDifficulty() --> unsigned char");
		cl.def("GetTrainingType", (unsigned char (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetTrainingType, "C++: TrainingEditorWrapper::GetTrainingType() --> unsigned char");
		cl.def("Save2", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::Save2, "C++: TrainingEditorWrapper::Save2() --> void");
		cl.def("OnTrainingModeLoaded", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::OnTrainingModeLoaded, "C++: TrainingEditorWrapper::OnTrainingModeLoaded() --> void");
		cl.def("DuplicateRound", (void (TrainingEditorWrapper::*)(int)) &TrainingEditorWrapper::DuplicateRound, "C++: TrainingEditorWrapper::DuplicateRound(int) --> void", pybind11::arg("Index"));
		cl.def("ReorderRound", (void (TrainingEditorWrapper::*)(int, int)) &TrainingEditorWrapper::ReorderRound, "C++: TrainingEditorWrapper::ReorderRound(int, int) --> void", pybind11::arg("FromIndex"), pybind11::arg("ToIndex"));
		cl.def("SetRoundTimeLimit", (void (TrainingEditorWrapper::*)(float)) &TrainingEditorWrapper::SetRoundTimeLimit, "C++: TrainingEditorWrapper::SetRoundTimeLimit(float) --> void", pybind11::arg("NewRoundTime"));
		cl.def("HandleNextGame", (bool (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::HandleNextGame, "C++: TrainingEditorWrapper::HandleNextGame() --> bool");
		cl.def("ResetBalls", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::ResetBalls, "C++: TrainingEditorWrapper::ResetBalls() --> void");
		cl.def("Load2", (void (TrainingEditorWrapper::*)(std::string, class PlayerControllerWrapper)) &TrainingEditorWrapper::Load2, "C++: TrainingEditorWrapper::Load2(std::string, class PlayerControllerWrapper) --> void", pybind11::arg("SaveName"), pybind11::arg("PC"));
		cl.def("DestroyGoalMeshBlockers", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::DestroyGoalMeshBlockers, "C++: TrainingEditorWrapper::DestroyGoalMeshBlockers() --> void");
		cl.def("UpdateGoalMeshBlocker", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::UpdateGoalMeshBlocker, "C++: TrainingEditorWrapper::UpdateGoalMeshBlocker() --> void");
		cl.def("GetScore", (int (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetScore, "C++: TrainingEditorWrapper::GetScore() --> int");
		cl.def("RemovePointsFromScore", (void (TrainingEditorWrapper::*)(int, int)) &TrainingEditorWrapper::RemovePointsFromScore, "C++: TrainingEditorWrapper::RemovePointsFromScore(int, int) --> void", pybind11::arg("PointsToRemove"), pybind11::arg("TeamIndex"));
		cl.def("ShowScorerGoalMessage", (bool (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::ShowScorerGoalMessage, "C++: TrainingEditorWrapper::ShowScorerGoalMessage() --> bool");
		cl.def("ShowResetRoundMessage", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::ShowResetRoundMessage, "C++: TrainingEditorWrapper::ShowResetRoundMessage() --> void");
		cl.def("ShowPenaltyMessage", (bool (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::ShowPenaltyMessage, "C++: TrainingEditorWrapper::ShowPenaltyMessage() --> bool");
		cl.def("GetPlayerTeamNumber", (int (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetPlayerTeamNumber, "C++: TrainingEditorWrapper::GetPlayerTeamNumber() --> int");
		cl.def("GetBallGoalScoreNumber", (int (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::GetBallGoalScoreNumber, "C++: TrainingEditorWrapper::GetBallGoalScoreNumber() --> int");
		cl.def("RemoveAllPointsFromScore", (void (TrainingEditorWrapper::*)(int)) &TrainingEditorWrapper::RemoveAllPointsFromScore, "C++: TrainingEditorWrapper::RemoveAllPointsFromScore(int) --> void", pybind11::arg("TeamIndex"));
		cl.def("IncrementRound", (bool (TrainingEditorWrapper::*)(unsigned long)) &TrainingEditorWrapper::IncrementRound, "C++: TrainingEditorWrapper::IncrementRound(unsigned long) --> bool", pybind11::arg("bLoop"));
		cl.def("AdjustToFloorLocation", (struct Vector (TrainingEditorWrapper::*)(struct Vector &, struct Vector &)) &TrainingEditorWrapper::AdjustToFloorLocation, "C++: TrainingEditorWrapper::AdjustToFloorLocation(struct Vector &, struct Vector &) --> struct Vector", pybind11::arg("TraceStart"), pybind11::arg("CollsionExtent"));
		cl.def("SpawnArchetypeAtAndAdjustToFloor", (class ActorWrapper (TrainingEditorWrapper::*)(class ActorWrapper, struct Vector &, struct Rotator &)) &TrainingEditorWrapper::SpawnArchetypeAtAndAdjustToFloor, "C++: TrainingEditorWrapper::SpawnArchetypeAtAndAdjustToFloor(class ActorWrapper, struct Vector &, struct Rotator &) --> class ActorWrapper", pybind11::arg("Archetype"), pybind11::arg("SpawnLocation"), pybind11::arg("SpawnRotation"));
		cl.def("SpawnBallAndStartPointAt", (void (TrainingEditorWrapper::*)(struct Vector &, struct Rotator &, struct Vector &, struct Rotator &)) &TrainingEditorWrapper::SpawnBallAndStartPointAt, "C++: TrainingEditorWrapper::SpawnBallAndStartPointAt(struct Vector &, struct Rotator &, struct Vector &, struct Rotator &) --> void", pybind11::arg("BallSpawnLocation"), pybind11::arg("BallSpawnRotation"), pybind11::arg("StartPointSpawnLocation"), pybind11::arg("StartPointSpawnRotation"));
		cl.def("SetupDefaultRound", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::SetupDefaultRound, "C++: TrainingEditorWrapper::SetupDefaultRound() --> void");
		cl.def("SwitchToRoundNumber", (void (TrainingEditorWrapper::*)(int, unsigned long)) &TrainingEditorWrapper::SwitchToRoundNumber, "C++: TrainingEditorWrapper::SwitchToRoundNumber(int, unsigned long) --> void", pybind11::arg("RoundNumber"), pybind11::arg("BackupCurrentRound"));
		cl.def("DeleteRound", (void (TrainingEditorWrapper::*)(int)) &TrainingEditorWrapper::DeleteRound, "C++: TrainingEditorWrapper::DeleteRound(int) --> void", pybind11::arg("RoundToDelete"));
		cl.def("RestartPlayTest", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::RestartPlayTest, "C++: TrainingEditorWrapper::RestartPlayTest() --> void");
		cl.def("EndPlayTest", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::EndPlayTest, "C++: TrainingEditorWrapper::EndPlayTest() --> void");
		cl.def("StartPlayTest", (void (TrainingEditorWrapper::*)(unsigned char)) &TrainingEditorWrapper::StartPlayTest, "C++: TrainingEditorWrapper::StartPlayTest(unsigned char) --> void", pybind11::arg("InPlayTestType"));
		cl.def("CanPlayTestRoundNumber", (bool (TrainingEditorWrapper::*)(int)) &TrainingEditorWrapper::CanPlayTestRoundNumber, "C++: TrainingEditorWrapper::CanPlayTestRoundNumber(int) --> bool", pybind11::arg("RoundNumber"));
		cl.def("SetUnsavedChanges", (void (TrainingEditorWrapper::*)(unsigned long)) &TrainingEditorWrapper::SetUnsavedChanges, "C++: TrainingEditorWrapper::SetUnsavedChanges(unsigned long) --> void", pybind11::arg("bInUnsavedChanges"));
		cl.def("UpdateActiveRoundData", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::UpdateActiveRoundData, "C++: TrainingEditorWrapper::UpdateActiveRoundData() --> void");
		cl.def("StartNewRound", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::StartNewRound, "C++: TrainingEditorWrapper::StartNewRound() --> void");
		cl.def("IsValidRoundIndex", (bool (TrainingEditorWrapper::*)(int)) &TrainingEditorWrapper::IsValidRoundIndex, "C++: TrainingEditorWrapper::IsValidRoundIndex(int) --> bool", pybind11::arg("ArrayIndex"));
		cl.def("AddLocalPlayer", (void (TrainingEditorWrapper::*)(class PlayerControllerWrapper)) &TrainingEditorWrapper::AddLocalPlayer, "C++: TrainingEditorWrapper::AddLocalPlayer(class PlayerControllerWrapper) --> void", pybind11::arg("Player"));
		cl.def("OnInit", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::OnInit, "C++: TrainingEditorWrapper::OnInit() --> void");
		cl.def("eventDestroyed", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::eventDestroyed, "C++: TrainingEditorWrapper::eventDestroyed() --> void");
		cl.def("eventPostBeginPlay", (void (TrainingEditorWrapper::*)()) &TrainingEditorWrapper::eventPostBeginPlay, "C++: TrainingEditorWrapper::eventPostBeginPlay() --> void");
		cl.def("EventSaveResult", (void (TrainingEditorWrapper::*)(unsigned long)) &TrainingEditorWrapper::EventSaveResult, "C++: TrainingEditorWrapper::EventSaveResult(unsigned long) --> void", pybind11::arg("bSuccess"));
		cl.def("EventUnsavedChanges", (void (TrainingEditorWrapper::*)(unsigned long)) &TrainingEditorWrapper::EventUnsavedChanges, "C++: TrainingEditorWrapper::EventUnsavedChanges(unsigned long) --> void", pybind11::arg("bOutUnsavedChanges"));
		cl.def("EventPlaytestStarted", (void (TrainingEditorWrapper::*)(class TrainingEditorWrapper)) &TrainingEditorWrapper::EventPlaytestStarted, "C++: TrainingEditorWrapper::EventPlaytestStarted(class TrainingEditorWrapper) --> void", pybind11::arg("GamEvent"));
		cl.def("EventRoundChanged", (void (TrainingEditorWrapper::*)(class TrainingEditorWrapper)) &TrainingEditorWrapper::EventRoundChanged, "C++: TrainingEditorWrapper::EventRoundChanged(class TrainingEditorWrapper) --> void", pybind11::arg("GamEvent"));
		cl.def("EventRoundTimeChanged", (void (TrainingEditorWrapper::*)(class TrainingEditorWrapper)) &TrainingEditorWrapper::EventRoundTimeChanged, "C++: TrainingEditorWrapper::EventRoundTimeChanged(class TrainingEditorWrapper) --> void", pybind11::arg("GameEvent"));
	}
}

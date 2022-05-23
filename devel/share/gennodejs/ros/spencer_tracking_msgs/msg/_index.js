
"use strict";

let DetectedPersons = require('./DetectedPersons.js');
let TrackedGroups = require('./TrackedGroups.js');
let TrackedGroup = require('./TrackedGroup.js');
let CompositeDetectedPersons = require('./CompositeDetectedPersons.js');
let ImmDebugInfo = require('./ImmDebugInfo.js');
let TrackedPerson = require('./TrackedPerson.js');
let TrackedPerson2d = require('./TrackedPerson2d.js');
let TrackedPersons = require('./TrackedPersons.js');
let PersonTrajectoryEntry = require('./PersonTrajectoryEntry.js');
let ImmDebugInfos = require('./ImmDebugInfos.js');
let PersonTrajectory = require('./PersonTrajectory.js');
let CompositeDetectedPerson = require('./CompositeDetectedPerson.js');
let TrackingTimingMetrics = require('./TrackingTimingMetrics.js');
let DetectedPerson = require('./DetectedPerson.js');
let TrackedPersons2d = require('./TrackedPersons2d.js');

module.exports = {
  DetectedPersons: DetectedPersons,
  TrackedGroups: TrackedGroups,
  TrackedGroup: TrackedGroup,
  CompositeDetectedPersons: CompositeDetectedPersons,
  ImmDebugInfo: ImmDebugInfo,
  TrackedPerson: TrackedPerson,
  TrackedPerson2d: TrackedPerson2d,
  TrackedPersons: TrackedPersons,
  PersonTrajectoryEntry: PersonTrajectoryEntry,
  ImmDebugInfos: ImmDebugInfos,
  PersonTrajectory: PersonTrajectory,
  CompositeDetectedPerson: CompositeDetectedPerson,
  TrackingTimingMetrics: TrackingTimingMetrics,
  DetectedPerson: DetectedPerson,
  TrackedPersons2d: TrackedPersons2d,
};

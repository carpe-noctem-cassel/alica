<?xml version="1.0" encoding="ASCII"?>
<alica:Plan xmi:version="2.0" xmlns:xmi="http://www.omg.org/XMI" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:alica="http:///de.uni_kassel.vs.cn" id="1418042796751" name="PreConditionPlan" comment="" masterPlan="false" utilityFunction="" utilityThreshold="0.1" priority="0.0" minCardinality="0" maxCardinality="2147483647">
  <conditions xsi:type="alica:PreCondition" id="1418042929966" name="NewPreCondition" comment="" conditionString="Test" pluginName="DefaultPlugin" enabled="true"/>
  <states id="1418042796752" name="PreConditionTest" comment="" entryPoint="1418042796753"/>
  <entryPoints id="1418042796753" name="MISSING_NAME" comment="" successRequired="false" minCardinality="0" maxCardinality="2147483647">
    <task>../Misc/taskrepository.tsk#1225112227903</task>
    <state>#1418042796752</state>
  </entryPoints>
</alica:Plan>

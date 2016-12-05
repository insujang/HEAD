<project xmlns="com.autoesl.autopilot.project" name="DedupHWModule_HLS" top="dedup">
    <files>
        <file name="../Source/dedup_test.cpp" sc="0" tb="1" cflags=" -std=c++0x"/>
        <file name="DedupHWModule_HLS/Source/murmur.cpp" sc="0" tb="false" cflags=""/>
        <file name="DedupHWModule_HLS/Source/dedup.h" sc="0" tb="false" cflags=""/>
        <file name="DedupHWModule_HLS/Source/dedup.cpp" sc="0" tb="false" cflags=""/>
        <file name="DedupHWModule_HLS/Source/calcHash.cpp" sc="0" tb="false" cflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" clean="true" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="Dedup" status="active"/>
    </solutions>
</project>


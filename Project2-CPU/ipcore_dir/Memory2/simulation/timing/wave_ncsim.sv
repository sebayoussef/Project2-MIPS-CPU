
 
 
 




window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"


      waveform add -signals /Memory2_tb/status
      waveform add -signals /Memory2_tb/Memory2_synth_inst/bmg_port/CLKA
      waveform add -signals /Memory2_tb/Memory2_synth_inst/bmg_port/ADDRA
      waveform add -signals /Memory2_tb/Memory2_synth_inst/bmg_port/DINA
      waveform add -signals /Memory2_tb/Memory2_synth_inst/bmg_port/WEA
      waveform add -signals /Memory2_tb/Memory2_synth_inst/bmg_port/DOUTA
console submit -using simulator -wait no "run"

//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1028686411
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, unsigned int p_9, unsigned long long p_11)
{
  char v_7;
  unsigned long v_5;
  float v;
  unsigned char result;
  v = (float)p;
  v_5 = (unsigned long)(-4.39777898788f + (float)(~ p / (- p_9 + 519U)) / (
                                          (59408.f + ((float)p_11 - v)) + 597.f));
  v = (float)(! p_9);
  v_7 = (char)(- v * v);
  result = (unsigned char)(- ((unsigned long)(p / ((unsigned int)(v + 78.f) + 946U)) % (
                              (v_5 & (unsigned long)(- v_7)) + 153UL)));
  return result;
}



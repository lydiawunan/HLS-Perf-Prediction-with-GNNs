#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 102107398
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, long p_7, char p_11[4], unsigned long p_13[5][4],
              unsigned short p_15)
{
  unsigned long v_19;
  short v_17;
  unsigned long v_9;
  unsigned short v_5;
  unsigned long v;
  long long result;
  v_19 = (unsigned long)p_7;
  v_17 = (short)-1630;
  v_5 = (unsigned short)980;
  v = (unsigned long)v_17 - ((unsigned long)((long)(~ p) ^ -40349L / (long)(
                                                           (int)v_5 + 938)) - ! (! v_19));
  v_9 = (unsigned long)(! p_11[2]) / ((((p_13[1][3] - (unsigned long)p_15) + (unsigned long)(- p_7)) ^ (
                                       v / (v + 468UL) + 4294944804UL)) + 557UL);
  v = - ((unsigned long)v_5 % (((unsigned long)p_7 - v_9) / 3975751795UL + 334UL));
  result = (long long)(v * (unsigned long)p);
  return result;
}



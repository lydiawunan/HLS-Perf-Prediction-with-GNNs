#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 82488116
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p[2][4][4], short p_13)
{
  unsigned int v_17;
  short v_15;
  long v_11;
  float v_9;
  char v_7;
  unsigned int v_5;
  unsigned long long v;
  int result;
  v_17 = 52472U;
  v_15 = (short)-21420;
  v_9 = (float)p_13;
  v_7 = (char)90;
  v_11 = (long)(-(unsigned char)35);
  if ((unsigned long)(~ v_11) <= (unsigned long)((unsigned int)(- (! p_13)) + - (
                                                 (unsigned int)v_15 * v_17))) 
    result = (int)p[1][3][2] * (int)p[0][2][3];
  else {
    v = (unsigned long long)(((int)(~ p[1][2][2]) & -29009) * (int)(- v_9));
    v_5 = 4153875964U;
    result = (int)(~ (v + (unsigned long long)v_5) + (unsigned long long)(- (
                   27345 + (int)v_7)));
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 466745069
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p[1][1], char p_7, long p_13)
{
  char v_17;
  short v_15;
  float v_11;
  int v_9;
  int v_4;
  unsigned short v;
  short result;
  v_17 = (char)p[0][0];
  v_15 = (short)p[0][0];
  v_11 = -787.914550781f;
  v_9 = (int)((long long)((int)(v_11 + (float)p_13) & (int)v_15 / ((int)v_15 + 260)) * (
              (-50924LL | (long long)v_17) - 91LL));
  if ((unsigned long)(~ (~ (181724847U + (unsigned int)p_7))) <= (unsigned long)(~ (
      ((long)v_9 + 171997766L) ^ (long)v_9))) {
    v_4 = 8489;
    v = (unsigned short)v_4;
    result = (short)v;
  }
  else result = (short)p[0][0];
  return result;
}



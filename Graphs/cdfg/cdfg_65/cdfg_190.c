#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 891302183
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, long p_5, signed char p_7[2], float p_11[2][5])
{
  char v_17;
  signed char v_15;
  char v_13;
  signed char v_9;
  long v;
  long result;
  v_17 = (char)p_7[0];
  v_13 = (char)p_11[1][2];
  v_9 = (signed char)p;
  v_15 = (signed char)((4149092380U - (unsigned int)(27949 >> ((int)((short)p) & 15))) % (unsigned int)(
                       16630 % ((int)p_7[0] + 489) + 225));
  if ((unsigned long)(((int)v_9 + (int)((signed char)(p_11[0][4] / 1762.59912109f))) / (
                      (int)v_13 + 227)) <= - (((unsigned long)v_15 ^ 3837998794UL) * (unsigned long)v_17)) 
    result = (long)p;
  else {
    v = (long)p_7[0];
    result = v ^ p_5;
  }
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 724207564
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, int p_5, float p_11, float p_13, char p_19)
{
  char v_23;
  short v_21;
  unsigned int v_17;
  char v_15;
  char v_9;
  signed char v_7;
  long v;
  char result;
  v_23 = (char)-49;
  v_21 = (short)p;
  v_17 = (unsigned int)p;
  v_15 = (char)-104;
  v_9 = (char)68;
  v_7 = (signed char)101;
  result = (char)-79;
  while (v_17 * (unsigned int)(~ (~ p_19)) > 107U) {
    v_23 = (int)v_23 & (int)v_21 % 20419;
    v = 457706282L;
    v_21 = (short)(! ((long)v_7 - (long)p * v));
    v_17 = (unsigned int)(- ((int)v_9 - (int)result));
  }
  while_0_break: ;
  if ((double)(- p_13) < - (111. - (double)v_15 / 1766.68213698)) {
    v = (long)(((unsigned long)(-41604L / (long)((int)v_7 + 845)) - 4294961668UL) * (unsigned long)(
               (int)p % ((int)v_9 + 397)));
    result = (char)100;
    result = (char)(((long)((int)result ^ (int)p) - -198214917L) * (v - (long)(- p_5)));
  }
  else result = (char)(-1.07594535071e+38 / (double)(((float)p + p_11) / (
                                                     - p_13 + 224.f) + 16.f));
  return result;
}



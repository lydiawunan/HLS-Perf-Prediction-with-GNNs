//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 21094502
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, short p_5, double p_11, double p_17[2])
{
  signed char v_21;
  char v_19;
  long long v_15;
  long long v_13;
  signed char v_9;
  short v_7;
  char v;
  signed char result;
  v_21 = (signed char)p_11;
  v_19 = (char)p_5;
  v_15 = (long long)p_11;
  v_13 = -718329205LL;
  v = (char)29;
  v_7 = (short)((int)((double)(v_13 - v_15) + - p_17[0] * (double)v_19) << (
                (((int)((signed char)-287.203308105f) >> ((int)v_21 & 7)) % (
                 ((int)v - 9) + 90)) % ((int)2577890560.f + 374) & 31));
  v = (char)p_5;
  v_9 = (signed char)(- (-49968067. / (p_11 + 872.)));
  result = (signed char)(~ ((int)(~ v) % ((int)p / ((int)p_5 + 1022) + 931)) ^ - (
                         (int)v_7 + ((int)((signed char)-1.47399369433e+38f) ^ (int)v_9)));
  return result;
}



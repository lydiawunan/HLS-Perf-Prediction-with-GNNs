#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1005773255
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, long p_4[3][3][4], float p_6, short p_8, short p_11)
{
  char v_25;
  unsigned long long v_23;
  unsigned long long v_21;
  double v_19;
  int v_17;
  unsigned short v_15;
  char v_13;
  unsigned long long v;
  char result;
  v_25 = (char)-6;
  v_23 = (unsigned long long)p;
  v_21 = (unsigned long long)p_8;
  v_17 = (int)p_6;
  v_15 = (unsigned short)44404;
  v_13 = (char)-76;
  v = 18446744072769645279ULL;
  result = (char)p_4[2][1][1];
  if (((int)p - ((int)result >> 4)) / (((int)v_13 * (int)p) % ((int)(
                                                               (float)v_15 * p_6) + 814) + 928) <= (int)v_25) {
    v_17 = v_17;
    v_21 = ! (- v) + (unsigned long long)((int)p_8 / 565);
    v_19 = (double)p_6;
  }
  else {
    v = (unsigned long long)587.162719727f;
    v_17 = (int)v_23;
    v_19 = (double)((long long)((int)(- p) % ((int)v_15 % (v_17 + 64) + 7)) / (
                    ((433255763LL << (v & 63ULL)) ^ (long long)((int)p_11 * 149)) + 134LL));
  }
  if (~ (v + (unsigned long long)((long long)p_11 / -422082147LL)) <= 
      (unsigned long long)(p_4[2][0][3] + (long)(! v_13)) / (((unsigned long long)(
                                                              (int)v_15 + v_17) ^ (
                                                              (unsigned long long)v_19 >> (
                                                              v_21 & 63ULL))) + 96ULL)) 
    result = (char)((double)((int)(~ p) | 142) - - (1736662846.5 / ((double)p_4[2][2][1] + 490.)));
  else result = (char)(! (-728968888L & (long)p_6) ^ (long)((int)p & (int)p_8));
  return result;
}



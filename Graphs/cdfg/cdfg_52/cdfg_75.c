#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 168711433
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, signed char p_5[3][1], float p_7,
                   unsigned int p_17, unsigned long p_21)
{
  int v_25;
  signed char v_23;
  long v_19;
  int v_15;
  unsigned int v_13;
  float v_11;
  float v_9;
  unsigned int v;
  unsigned short result;
  v_25 = p;
  v_23 = p_5[0][0];
  v_19 = (long)p_5[0][0];
  v_15 = -984659136;
  v_13 = (unsigned int)p_7;
  v_11 = 9733108736.f;
  v_9 = (float)p_5[1][0];
  v = (unsigned int)p_7;
  result = (unsigned short)p;
  if (0.f < v_9) {
    v_25 *= (int)3.2439709139e+38;
    v_11 = (float)(((unsigned int)(v_25 ^ 24965) % 4294919764U) * (! v >> (
                                                                   (v + (unsigned int)p_5[2][0]) & 31U)));
    v_23 = (signed char)110;
  }
  else {
    v_9 = (float)(((unsigned long long)((int)v_23 - (int)((signed char)p_7)) + (
                   18446744072862226558ULL - (unsigned long long)p_17)) + (unsigned long long)v_23);
    v_13 = (unsigned int)(- (((float)p_17 / (v_11 + 523.f)) / ((float)(
                                                               v_13 / 4294941659U) + 654.f)));
    v_11 = (float)(! (p_21 / (unsigned long)(v_25 + 48)) * ! ((unsigned long)p * p_21));
  }
  if ((double)((p_7 - 45793.f) * (float)((int)p_5[1][0] % 12569) + v_9 * (
                                                                   v_11 + (float)v_13)) != 
      ((double)p / -294.348810927) * (double)((unsigned int)v_15 / (p_17 + 480U)) + (double)(
      ((unsigned long)v_19 * p_21) / (unsigned long)(-129105890L % (long)(
                                                     (int)v_23 + 917) + 656L))) 
    result = (unsigned short)(! (~ p * 24799));
  else {
    v = (unsigned int)(! ((int)p_5[1][0] - (int)(! p_5[2][0])));
    result = (unsigned short)(- (v & (unsigned int)result));
    result = (unsigned short)(! (- ((long)result & 293763291L)));
  }
  return result;
}



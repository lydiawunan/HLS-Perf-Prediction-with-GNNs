#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 365199067
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, unsigned char p_4, long long p_9, unsigned int p_11,
              short p_23[1][1][2])
{
  char v_21;
  float v_19;
  long v_17;
  int v_15;
  long long v_13;
  unsigned char v_7;
  float v;
  long long result;
  v_21 = (char)-5;
  v_19 = -711.79876709f;
  v_15 = (int)p_4;
  v_13 = (long long)p_23[0][0][0];
  v = -5.24011923096e+37f;
  if ((unsigned int)v_21 != (unsigned int)(-15 + (int)(~ v_21)) % (p_11 + 506U)) {
    v_17 = (long)((long long)(p_11 * p_11) % (~ v_13 + 630LL) + (long long)(
                  v_15 - (int)v_19));
    v_7 = (unsigned char)(- ((long long)p_11 ^ v_13) * (long long)(((unsigned long)v_15 + 4294964218UL) + (unsigned long)v_17));
    result = (long long)(((-507.341015487 + (double)v) * -4.49088549902e+37) * (
                         307.689537786 / ((double)((long long)v_7 * p_9) + 980.)));
  }
  else {
    v_21 = (char)(24588U & - (p_11 * 43162U));
    result = (long long)(~ ((int)v_21 % 35310 - (int)(! p_23[0][0][0])));
  }
  result = 38472LL * result | (long long)(- p / ((887637962L | (long)p_4) + 736L));
  return result;
}



#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 238052886
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, int p_5, long p_7, unsigned int p_11,
                  unsigned long p_15)
{
  double v_23;
  long long v_21;
  char v_19;
  unsigned long long v_17;
  long long v_13;
  unsigned int v_9;
  long long v;
  unsigned char result;
  v_23 = (double)p_15;
  v_21 = -25337LL;
  result = (unsigned char)67;
  if (50755UL + ((unsigned long)((int)result % ((int)((unsigned char)v_23) + 801)) - - p_15) > 112UL) 
    v_13 = -13598LL;
  else {
    v_17 = (unsigned long long)-4.57288170338e+37f;
    v_19 = (char)((long long)(p_11 - 70U) % (v_21 + 61LL) >> 47ULL);
    v_13 = (long long)(- ((v_17 + (unsigned long long)p_5) + (unsigned long long)(
                          4207532300UL - (unsigned long)v_19)));
  }
  if ((unsigned long)((double)((long long)(- p_11) % ((v_13 << (p_15 & 63UL)) + 725LL)) - -580.523778797) > ~ (
      4294957441UL / (unsigned long)((87L | p_7) + 276L))) {
    v = (long long)p_7;
    result = (unsigned char)((((long long)p + v) + 5501LL) * (long long)(
                             (long)p_5 + p_7));
  }
  else {
    v_9 = 4294967222U;
    result = (unsigned char)((unsigned long)(36366L >> (! p_5 & 31)) % (unsigned long)(
                             v_9 + 531U));
  }
  return result;
}



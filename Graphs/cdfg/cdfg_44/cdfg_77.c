#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 458162982
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned long long p_4, long long p_7,
                  short p_15[1][5], int p_17)
{
  char v_23;
  char v_21;
  char v_19;
  float v_13;
  char v_11;
  unsigned int v_9;
  short v;
  unsigned char result;
  v_23 = (char)p;
  v_21 = (char)p;
  v_19 = (char)p;
  v_13 = (float)p;
  v_11 = (char)-127;
  v_9 = (unsigned int)p_15[0][1];
  v = p_15[0][0];
  result = (unsigned char)p_4;
  if ((int)v_11 < ~ ((int)(~ p) * (int)(! result))) {
    v = (short)(! ((long)(p_17 + (int)p_15[0][1]) % -1035508060L));
    v_11 = (char)((float)(0LL ^ p_7) + v_13);
    result = (unsigned char)((p_7 / (long long)((int)p + 950)) * (long long)p_15[0][3] << (
                             (long long)(- ((float)v_9 + 724.962768555f)) & 63LL));
  }
  else {
    v_13 = (float)(! (- v_11));
    v_9 = (unsigned int)((unsigned long long)((unsigned long)(v_9 - (unsigned int)v_21) % 3962253741UL) - - (
                         (unsigned long long)v_23 * 624575255ULL));
    v_13 = (float)((long long)(((float)p_17 * v_13) * (float)(! p_4)) - (
                   (long long)((int)v_11 / 96) & (p_7 | (long long)v_19)));
  }
  while (~ ((unsigned long long)p % (! p_4 + 383ULL)) >= (unsigned long long)(
         (long long)(0 / (((int)v - 602) + 283)) / (~ p_7 + 761LL))) {
    v_9 = v_13 + (float)((int)v_11 << (((unsigned long long)v_9 - 23791ULL) & 7ULL));
    v_13 = (float)((unsigned long long)(15770U % (unsigned int)((int)(- p) + 757)) % (
                   - p_4 + 123ULL));
    v_11 = (char)90;
    v = (short)0;
  }
  while_0_break: ;
  return result;
}



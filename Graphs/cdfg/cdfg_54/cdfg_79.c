#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 516707684
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p[2][2][2], double p_5, short p_13, unsigned int p_17,
                  signed char p_19)
{
  unsigned int v_23;
  char v_21;
  int v_15;
  unsigned long v_11;
  signed char v_9;
  signed char v_7;
  unsigned short v;
  unsigned long result;
  v_23 = 4238918763U;
  v_21 = (char)p_19;
  v_15 = (int)p_17;
  v_11 = 4294965231UL;
  v_9 = (signed char)-26;
  v_7 = (signed char)49;
  v = (unsigned short)37103;
  while (4271106408UL >= (unsigned long)(((int)p_13 >> ((v_11 + (unsigned long)v) & 15UL)) - (int)v)) {
    result = (long long)v_23 * -513957710LL;
    v_7 = (signed char)-105;
    v_9 = (signed char)(~ (-25009L % ((long)(p_5 + 31.) + 895L)));
    v_11 = result * (unsigned long)(! ((int)((unsigned short)5444122624.f) ^ (int)v));
  }
  while_0_break: ;
  if ((unsigned long long)(- p[0][1][0] << ((p[0][1][0] - (long)p_13) & 31L)) * 545719908ULL < (unsigned long long)(
      (double)((int)p_19 - (int)v_21) * (p_5 / ((double)v_9 + 731.)) + (double)(
      (int)((unsigned short)(849661943. - p_5)) << 6))) {
    v_7 = (signed char)(-13947ULL);
    result = (unsigned long)((int)v_7 << ((unsigned long)p[0][1][1] % 921821264UL & 7UL));
    result = (unsigned long)(- ((int)v + 41)) + ((unsigned long)p[0][1][1] + result) % (unsigned long)(
                                                ((int)((signed char)p_5) >> 1) + 975);
  }
  else {
    v_11 = (unsigned long)(- ((unsigned int)(~ v_15) & ~ p_17));
    v_9 = (signed char)((long long)(((unsigned long)p[1][0][1] + v_11) << (
                                    ((int)v_7 ^ -13254) & 31)) + ! ((long long)p_13 + -535884887LL));
    result = (unsigned long)(~ v_9);
  }
  return result;
}



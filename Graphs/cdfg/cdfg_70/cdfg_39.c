#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 727142751
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, int p_9, unsigned long p_13[5][3], long p_17)
{
  long v_19;
  unsigned long long v_15;
  int v_11;
  unsigned char v_7;
  long v_5;
  long v;
  char result;
  v_19 = -92213847L;
  v_15 = (unsigned long long)p_17;
  v_11 = p_9;
  v_7 = (unsigned char)127;
  result = (char)-8;
  v_19 = ~ (- v_19 - -26311L);
  if ((- p_13[2][0] >> ((281319029UL - p_13[2][0]) & 31UL)) % (unsigned long)(
      - (v_11 & -902037954) + 839) == (unsigned long)(~ (v_19 + 23943L) ^ (long)result)) {
    v_5 = (long)((unsigned long long)(- (3629530477UL - (unsigned long)p_9)) * (
                 (unsigned long long)(24 << (v_11 & 7)) / (((unsigned long long)p_13[1][0] & v_15) + 708ULL)));
    v = ~ ((v_5 - (long)v_7) ^ 104L);
    result = (char)((unsigned long long)((long long)(v - -360339444L) * 43342LL) + p);
  }
  else result = (char)p_17;
  return result;
}



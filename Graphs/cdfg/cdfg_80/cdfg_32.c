#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 713682778
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, unsigned long long p_5, unsigned long p_7,
         double p_13, char p_15)
{
  unsigned short v_19;
  unsigned long v_17;
  char v_11;
  unsigned char v_9;
  long v;
  long result;
  v_17 = (unsigned long)p;
  v_9 = (unsigned char)p_5;
  v = -13381L;
  result = (long)p_5;
  if ((unsigned long long)v >= (unsigned long long)((unsigned long)(96L ^ result) + 
                                                    v_17 / 4294967204UL) % (
                               ~ (7742ULL - p) + 26ULL)) {
    v_11 = (char)-3249910019.21;
    v_9 = (unsigned char)v_17;
    v = (long)-159.974837595;
  }
  else {
    v_19 = (unsigned short)((unsigned long long)(18 & (int)(~ p_15)) * (
                            (18446744073709524390ULL + p_5) + (unsigned long long)(
                            (unsigned long)p_13 | p_7)));
    v = (long)(! (18476ULL * p) - (unsigned long long)(! v_19));
    v_11 = (char)p_13;
  }
  while ((unsigned long long)(- v) / ((59ULL / (p + 558ULL) + (p_5 + (unsigned long long)p_7)) + 18ULL) < (unsigned long long)(~ (! v_9))) {
    v_11 = (int)v_11;
    result = 0L;
    v = 0L;
    v_9 = (unsigned char)(- p_7);
  }
  while_0_break: ;
  return result;
}



#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_56979220;

SignalI remaining_57236700_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeremaining_57236700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_57236700_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_56979220;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makebase_57463300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_56979220;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI next__data_57526040_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makenext__data_57526040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57526040_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_56979220;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI interpolated__value_57670660_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeinterpolated__value_57670660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_57670660_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_56979220;
   signalI->name = "interpolated_value";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __59165080;

void code__59165080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = ({
                                    Value src0,src1,dst = get_value();
                                    unsigned int pool_state = get_value_pos();
                                    src0 = next__data_57526040_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                                    src1 = base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_57236700_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59185680();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_57670660_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59165080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59165080 = block;
   block->owner = (Object)__59163540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59165080;

   return block;
};

Value make__59185680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_50804920;

Scope __50803920;

Scope make__50803920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50803920 = scope;
   scope->owner = (Object)my__interpolator_58_840_50804920;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59163540;

Behavior make__59163540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59163540 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_50804920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[base_57463300_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57526040_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   next__data_57526040_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   next__data_57526040_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(next__data_57526040_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,next__data_57526040_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
next__data_57526040_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[next__data_57526040_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_57236700_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   remaining_57236700_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   remaining_57236700_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(remaining_57236700_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,remaining_57236700_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
remaining_57236700_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[remaining_57236700_my__interpolator_58_8400_56979220_func1_58_84_50235540_func1_58_840_59426400_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59165080();

   return behavior;
}

Scope makemy__interpolator_58_840_50804920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_50804920 = scope;
   scope->owner = (Object)my__interpolator_58_8400_56979220;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__50803920();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59163540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_56979220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_56979220 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_57236700();
   systemT->inputs[1] = makebase_57463300();
   systemT->inputs[2] = makenext__data_57526040();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_57670660();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_50804920();

   return systemT;
}
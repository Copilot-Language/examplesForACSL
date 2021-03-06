/* File: "trigger_guard_alert_WCVtaumod.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: ?wellClearViolation",color=plum, style=filled]
0 -> 1
2 [label="op2: &&",color=green4, style=filled]
1 -> 2
3 [label="label: ?horizontalWCV",color=plum, style=filled]
2 -> 3
4 [label="op2: ||",color=green4, style=filled]
3 -> 4
5 [label="op2: <=",color=green4, style=filled]
4 -> 5
6 [label="label: ?norm2dim",color=plum, style=filled]
5 -> 6
7 [label="ext_sqrt_4",color=cyan4, style=filled]
6 -> 7
49 [label="label: ?nm",color=plum, style=filled]
5 -> 49
50 [label="const: 1852.0",color=red1, style=filled]
49 -> 50
51 [label="op2: &&",color=green4, style=filled]
4 -> 51
52 [label="op2: <=",color=green4, style=filled]
51 -> 52
53 [label="label: ?norm2dim",color=plum, style=filled]
52 -> 53
54 [label="ext_sqrt_5",color=cyan4, style=filled]
53 -> 54
724 [label="label: ?nm",color=plum, style=filled]
52 -> 724
725 [label="const: 1852.0",color=red1, style=filled]
724 -> 725
726 [label="op2: &&",color=green4, style=filled]
51 -> 726
727 [label="op2: <=",color=green4, style=filled]
726 -> 727
728 [label="const: 0.0",color=red1, style=filled]
727 -> 728
729 [label="label: ?taumod",color=plum, style=filled]
727 -> 729
730 [label="op3: mux",color=green4, style=filled]
729 -> 730
731 [label="op2: <",color=green4, style=filled]
730 -> 731
732 [label="label: ?scalar2dim",color=plum, style=filled]
731 -> 732
733 [label="op2: +",color=green4, style=filled]
732 -> 733
734 [label="op2: *",color=green4, style=filled]
733 -> 734
735 [label="op2: -",color=green4, style=filled]
734 -> 735
736 [label="label: ?ownPositionX",color=plum, style=filled]
735 -> 736
737 [label="op2: *",color=green4, style=filled]
736 -> 737
738 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
737 -> 738
739 [label="const: 0.3048",color=red1, style=filled]
737 -> 739
740 [label="label: ?intPositionX",color=plum, style=filled]
735 -> 740
741 [label="op2: *",color=green4, style=filled]
740 -> 741
742 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
741 -> 742
743 [label="const: 0.3048",color=red1, style=filled]
741 -> 743
744 [label="op2: -",color=green4, style=filled]
734 -> 744
745 [label="label: ?ownVelocityX",color=plum, style=filled]
744 -> 745
746 [label="op2: /",color=green4, style=filled]
745 -> 746
747 [label="op2: *",color=green4, style=filled]
746 -> 747
748 [label="ext_ownship_vx",color=cyan1, style=filled]
747 -> 748
749 [label="const: 0.3048",color=red1, style=filled]
747 -> 749
750 [label="const: 1.0",color=red1, style=filled]
746 -> 750
751 [label="label: ?intVelocityX",color=plum, style=filled]
744 -> 751
752 [label="op2: /",color=green4, style=filled]
751 -> 752
753 [label="op2: *",color=green4, style=filled]
752 -> 753
754 [label="ext_intruder_vx",color=cyan1, style=filled]
753 -> 754
755 [label="const: 0.3048",color=red1, style=filled]
753 -> 755
756 [label="const: 1.0",color=red1, style=filled]
752 -> 756
757 [label="op2: *",color=green4, style=filled]
733 -> 757
758 [label="op2: -",color=green4, style=filled]
757 -> 758
759 [label="label: ?ownPositionY",color=plum, style=filled]
758 -> 759
760 [label="op2: *",color=green4, style=filled]
759 -> 760
761 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
760 -> 761
762 [label="const: 0.3048",color=red1, style=filled]
760 -> 762
763 [label="label: ?intPositionY",color=plum, style=filled]
758 -> 763
764 [label="op2: *",color=green4, style=filled]
763 -> 764
765 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
764 -> 765
766 [label="const: 0.3048",color=red1, style=filled]
764 -> 766
767 [label="op2: -",color=green4, style=filled]
757 -> 767
768 [label="label: ?ownVelocityY",color=plum, style=filled]
767 -> 768
769 [label="op2: /",color=green4, style=filled]
768 -> 769
770 [label="op2: *",color=green4, style=filled]
769 -> 770
771 [label="ext_ownship_vy",color=cyan1, style=filled]
770 -> 771
772 [label="const: 0.3048",color=red1, style=filled]
770 -> 772
773 [label="const: 1.0",color=red1, style=filled]
769 -> 773
774 [label="label: ?intVelocityY",color=plum, style=filled]
767 -> 774
775 [label="op2: /",color=green4, style=filled]
774 -> 775
776 [label="op2: *",color=green4, style=filled]
775 -> 776
777 [label="ext_intruder_vy",color=cyan1, style=filled]
776 -> 777
778 [label="const: 0.3048",color=red1, style=filled]
776 -> 778
779 [label="const: 1.0",color=red1, style=filled]
775 -> 779
780 [label="const: 0.0",color=red1, style=filled]
731 -> 780
781 [label="op2: /",color=green4, style=filled]
730 -> 781
782 [label="op2: -",color=green4, style=filled]
781 -> 782
783 [label="op2: *",color=green4, style=filled]
782 -> 783
784 [label="label: ?nm",color=plum, style=filled]
783 -> 784
785 [label="const: 1852.0",color=red1, style=filled]
784 -> 785
786 [label="label: ?nm",color=plum, style=filled]
783 -> 786
787 [label="const: 1852.0",color=red1, style=filled]
786 -> 787
788 [label="label: ?normsq2dim",color=plum, style=filled]
782 -> 788
789 [label="label: ?scalar2dim",color=plum, style=filled]
788 -> 789
790 [label="op2: +",color=green4, style=filled]
789 -> 790
791 [label="op2: *",color=green4, style=filled]
790 -> 791
792 [label="op2: -",color=green4, style=filled]
791 -> 792
793 [label="label: ?ownPositionX",color=plum, style=filled]
792 -> 793
794 [label="op2: *",color=green4, style=filled]
793 -> 794
795 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
794 -> 795
796 [label="const: 0.3048",color=red1, style=filled]
794 -> 796
797 [label="label: ?intPositionX",color=plum, style=filled]
792 -> 797
798 [label="op2: *",color=green4, style=filled]
797 -> 798
799 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
798 -> 799
800 [label="const: 0.3048",color=red1, style=filled]
798 -> 800
801 [label="op2: -",color=green4, style=filled]
791 -> 801
802 [label="label: ?ownPositionX",color=plum, style=filled]
801 -> 802
803 [label="op2: *",color=green4, style=filled]
802 -> 803
804 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
803 -> 804
805 [label="const: 0.3048",color=red1, style=filled]
803 -> 805
806 [label="label: ?intPositionX",color=plum, style=filled]
801 -> 806
807 [label="op2: *",color=green4, style=filled]
806 -> 807
808 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
807 -> 808
809 [label="const: 0.3048",color=red1, style=filled]
807 -> 809
810 [label="op2: *",color=green4, style=filled]
790 -> 810
811 [label="op2: -",color=green4, style=filled]
810 -> 811
812 [label="label: ?ownPositionY",color=plum, style=filled]
811 -> 812
813 [label="op2: *",color=green4, style=filled]
812 -> 813
814 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
813 -> 814
815 [label="const: 0.3048",color=red1, style=filled]
813 -> 815
816 [label="label: ?intPositionY",color=plum, style=filled]
811 -> 816
817 [label="op2: *",color=green4, style=filled]
816 -> 817
818 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
817 -> 818
819 [label="const: 0.3048",color=red1, style=filled]
817 -> 819
820 [label="op2: -",color=green4, style=filled]
810 -> 820
821 [label="label: ?ownPositionY",color=plum, style=filled]
820 -> 821
822 [label="op2: *",color=green4, style=filled]
821 -> 822
823 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
822 -> 823
824 [label="const: 0.3048",color=red1, style=filled]
822 -> 824
825 [label="label: ?intPositionY",color=plum, style=filled]
820 -> 825
826 [label="op2: *",color=green4, style=filled]
825 -> 826
827 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
826 -> 827
828 [label="const: 0.3048",color=red1, style=filled]
826 -> 828
829 [label="label: ?scalar2dim",color=plum, style=filled]
781 -> 829
830 [label="op2: +",color=green4, style=filled]
829 -> 830
831 [label="op2: *",color=green4, style=filled]
830 -> 831
832 [label="op2: -",color=green4, style=filled]
831 -> 832
833 [label="label: ?ownPositionX",color=plum, style=filled]
832 -> 833
834 [label="op2: *",color=green4, style=filled]
833 -> 834
835 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
834 -> 835
836 [label="const: 0.3048",color=red1, style=filled]
834 -> 836
837 [label="label: ?intPositionX",color=plum, style=filled]
832 -> 837
838 [label="op2: *",color=green4, style=filled]
837 -> 838
839 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
838 -> 839
840 [label="const: 0.3048",color=red1, style=filled]
838 -> 840
841 [label="op2: -",color=green4, style=filled]
831 -> 841
842 [label="label: ?ownVelocityX",color=plum, style=filled]
841 -> 842
843 [label="op2: /",color=green4, style=filled]
842 -> 843
844 [label="op2: *",color=green4, style=filled]
843 -> 844
845 [label="ext_ownship_vx",color=cyan1, style=filled]
844 -> 845
846 [label="const: 0.3048",color=red1, style=filled]
844 -> 846
847 [label="const: 1.0",color=red1, style=filled]
843 -> 847
848 [label="label: ?intVelocityX",color=plum, style=filled]
841 -> 848
849 [label="op2: /",color=green4, style=filled]
848 -> 849
850 [label="op2: *",color=green4, style=filled]
849 -> 850
851 [label="ext_intruder_vx",color=cyan1, style=filled]
850 -> 851
852 [label="const: 0.3048",color=red1, style=filled]
850 -> 852
853 [label="const: 1.0",color=red1, style=filled]
849 -> 853
854 [label="op2: *",color=green4, style=filled]
830 -> 854
855 [label="op2: -",color=green4, style=filled]
854 -> 855
856 [label="label: ?ownPositionY",color=plum, style=filled]
855 -> 856
857 [label="op2: *",color=green4, style=filled]
856 -> 857
858 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
857 -> 858
859 [label="const: 0.3048",color=red1, style=filled]
857 -> 859
860 [label="label: ?intPositionY",color=plum, style=filled]
855 -> 860
861 [label="op2: *",color=green4, style=filled]
860 -> 861
862 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
861 -> 862
863 [label="const: 0.3048",color=red1, style=filled]
861 -> 863
864 [label="op2: -",color=green4, style=filled]
854 -> 864
865 [label="label: ?ownVelocityY",color=plum, style=filled]
864 -> 865
866 [label="op2: /",color=green4, style=filled]
865 -> 866
867 [label="op2: *",color=green4, style=filled]
866 -> 867
868 [label="ext_ownship_vy",color=cyan1, style=filled]
867 -> 868
869 [label="const: 0.3048",color=red1, style=filled]
867 -> 869
870 [label="const: 1.0",color=red1, style=filled]
866 -> 870
871 [label="label: ?intVelocityY",color=plum, style=filled]
864 -> 871
872 [label="op2: /",color=green4, style=filled]
871 -> 872
873 [label="op2: *",color=green4, style=filled]
872 -> 873
874 [label="ext_intruder_vy",color=cyan1, style=filled]
873 -> 874
875 [label="const: 0.3048",color=red1, style=filled]
873 -> 875
876 [label="const: 1.0",color=red1, style=filled]
872 -> 876
877 [label="const: -1.0",color=red1, style=filled]
730 -> 877
878 [label="op2: <=",color=green4, style=filled]
726 -> 878
879 [label="label: ?taumod",color=plum, style=filled]
878 -> 879
880 [label="op3: mux",color=green4, style=filled]
879 -> 880
881 [label="op2: <",color=green4, style=filled]
880 -> 881
882 [label="label: ?scalar2dim",color=plum, style=filled]
881 -> 882
883 [label="op2: +",color=green4, style=filled]
882 -> 883
884 [label="op2: *",color=green4, style=filled]
883 -> 884
885 [label="op2: -",color=green4, style=filled]
884 -> 885
886 [label="label: ?ownPositionX",color=plum, style=filled]
885 -> 886
887 [label="op2: *",color=green4, style=filled]
886 -> 887
888 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
887 -> 888
889 [label="const: 0.3048",color=red1, style=filled]
887 -> 889
890 [label="label: ?intPositionX",color=plum, style=filled]
885 -> 890
891 [label="op2: *",color=green4, style=filled]
890 -> 891
892 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
891 -> 892
893 [label="const: 0.3048",color=red1, style=filled]
891 -> 893
894 [label="op2: -",color=green4, style=filled]
884 -> 894
895 [label="label: ?ownVelocityX",color=plum, style=filled]
894 -> 895
896 [label="op2: /",color=green4, style=filled]
895 -> 896
897 [label="op2: *",color=green4, style=filled]
896 -> 897
898 [label="ext_ownship_vx",color=cyan1, style=filled]
897 -> 898
899 [label="const: 0.3048",color=red1, style=filled]
897 -> 899
900 [label="const: 1.0",color=red1, style=filled]
896 -> 900
901 [label="label: ?intVelocityX",color=plum, style=filled]
894 -> 901
902 [label="op2: /",color=green4, style=filled]
901 -> 902
903 [label="op2: *",color=green4, style=filled]
902 -> 903
904 [label="ext_intruder_vx",color=cyan1, style=filled]
903 -> 904
905 [label="const: 0.3048",color=red1, style=filled]
903 -> 905
906 [label="const: 1.0",color=red1, style=filled]
902 -> 906
907 [label="op2: *",color=green4, style=filled]
883 -> 907
908 [label="op2: -",color=green4, style=filled]
907 -> 908
909 [label="label: ?ownPositionY",color=plum, style=filled]
908 -> 909
910 [label="op2: *",color=green4, style=filled]
909 -> 910
911 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
910 -> 911
912 [label="const: 0.3048",color=red1, style=filled]
910 -> 912
913 [label="label: ?intPositionY",color=plum, style=filled]
908 -> 913
914 [label="op2: *",color=green4, style=filled]
913 -> 914
915 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
914 -> 915
916 [label="const: 0.3048",color=red1, style=filled]
914 -> 916
917 [label="op2: -",color=green4, style=filled]
907 -> 917
918 [label="label: ?ownVelocityY",color=plum, style=filled]
917 -> 918
919 [label="op2: /",color=green4, style=filled]
918 -> 919
920 [label="op2: *",color=green4, style=filled]
919 -> 920
921 [label="ext_ownship_vy",color=cyan1, style=filled]
920 -> 921
922 [label="const: 0.3048",color=red1, style=filled]
920 -> 922
923 [label="const: 1.0",color=red1, style=filled]
919 -> 923
924 [label="label: ?intVelocityY",color=plum, style=filled]
917 -> 924
925 [label="op2: /",color=green4, style=filled]
924 -> 925
926 [label="op2: *",color=green4, style=filled]
925 -> 926
927 [label="ext_intruder_vy",color=cyan1, style=filled]
926 -> 927
928 [label="const: 0.3048",color=red1, style=filled]
926 -> 928
929 [label="const: 1.0",color=red1, style=filled]
925 -> 929
930 [label="const: 0.0",color=red1, style=filled]
881 -> 930
931 [label="op2: /",color=green4, style=filled]
880 -> 931
932 [label="op2: -",color=green4, style=filled]
931 -> 932
933 [label="op2: *",color=green4, style=filled]
932 -> 933
934 [label="label: ?nm",color=plum, style=filled]
933 -> 934
935 [label="const: 1852.0",color=red1, style=filled]
934 -> 935
936 [label="label: ?nm",color=plum, style=filled]
933 -> 936
937 [label="const: 1852.0",color=red1, style=filled]
936 -> 937
938 [label="label: ?normsq2dim",color=plum, style=filled]
932 -> 938
939 [label="label: ?scalar2dim",color=plum, style=filled]
938 -> 939
940 [label="op2: +",color=green4, style=filled]
939 -> 940
941 [label="op2: *",color=green4, style=filled]
940 -> 941
942 [label="op2: -",color=green4, style=filled]
941 -> 942
943 [label="label: ?ownPositionX",color=plum, style=filled]
942 -> 943
944 [label="op2: *",color=green4, style=filled]
943 -> 944
945 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
944 -> 945
946 [label="const: 0.3048",color=red1, style=filled]
944 -> 946
947 [label="label: ?intPositionX",color=plum, style=filled]
942 -> 947
948 [label="op2: *",color=green4, style=filled]
947 -> 948
949 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
948 -> 949
950 [label="const: 0.3048",color=red1, style=filled]
948 -> 950
951 [label="op2: -",color=green4, style=filled]
941 -> 951
952 [label="label: ?ownPositionX",color=plum, style=filled]
951 -> 952
953 [label="op2: *",color=green4, style=filled]
952 -> 953
954 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
953 -> 954
955 [label="const: 0.3048",color=red1, style=filled]
953 -> 955
956 [label="label: ?intPositionX",color=plum, style=filled]
951 -> 956
957 [label="op2: *",color=green4, style=filled]
956 -> 957
958 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
957 -> 958
959 [label="const: 0.3048",color=red1, style=filled]
957 -> 959
960 [label="op2: *",color=green4, style=filled]
940 -> 960
961 [label="op2: -",color=green4, style=filled]
960 -> 961
962 [label="label: ?ownPositionY",color=plum, style=filled]
961 -> 962
963 [label="op2: *",color=green4, style=filled]
962 -> 963
964 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
963 -> 964
965 [label="const: 0.3048",color=red1, style=filled]
963 -> 965
966 [label="label: ?intPositionY",color=plum, style=filled]
961 -> 966
967 [label="op2: *",color=green4, style=filled]
966 -> 967
968 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
967 -> 968
969 [label="const: 0.3048",color=red1, style=filled]
967 -> 969
970 [label="op2: -",color=green4, style=filled]
960 -> 970
971 [label="label: ?ownPositionY",color=plum, style=filled]
970 -> 971
972 [label="op2: *",color=green4, style=filled]
971 -> 972
973 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
972 -> 973
974 [label="const: 0.3048",color=red1, style=filled]
972 -> 974
975 [label="label: ?intPositionY",color=plum, style=filled]
970 -> 975
976 [label="op2: *",color=green4, style=filled]
975 -> 976
977 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
976 -> 977
978 [label="const: 0.3048",color=red1, style=filled]
976 -> 978
979 [label="label: ?scalar2dim",color=plum, style=filled]
931 -> 979
980 [label="op2: +",color=green4, style=filled]
979 -> 980
981 [label="op2: *",color=green4, style=filled]
980 -> 981
982 [label="op2: -",color=green4, style=filled]
981 -> 982
983 [label="label: ?ownPositionX",color=plum, style=filled]
982 -> 983
984 [label="op2: *",color=green4, style=filled]
983 -> 984
985 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
984 -> 985
986 [label="const: 0.3048",color=red1, style=filled]
984 -> 986
987 [label="label: ?intPositionX",color=plum, style=filled]
982 -> 987
988 [label="op2: *",color=green4, style=filled]
987 -> 988
989 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
988 -> 989
990 [label="const: 0.3048",color=red1, style=filled]
988 -> 990
991 [label="op2: -",color=green4, style=filled]
981 -> 991
992 [label="label: ?ownVelocityX",color=plum, style=filled]
991 -> 992
993 [label="op2: /",color=green4, style=filled]
992 -> 993
994 [label="op2: *",color=green4, style=filled]
993 -> 994
995 [label="ext_ownship_vx",color=cyan1, style=filled]
994 -> 995
996 [label="const: 0.3048",color=red1, style=filled]
994 -> 996
997 [label="const: 1.0",color=red1, style=filled]
993 -> 997
998 [label="label: ?intVelocityX",color=plum, style=filled]
991 -> 998
999 [label="op2: /",color=green4, style=filled]
998 -> 999
1000 [label="op2: *",color=green4, style=filled]
999 -> 1000
1001 [label="ext_intruder_vx",color=cyan1, style=filled]
1000 -> 1001
1002 [label="const: 0.3048",color=red1, style=filled]
1000 -> 1002
1003 [label="const: 1.0",color=red1, style=filled]
999 -> 1003
1004 [label="op2: *",color=green4, style=filled]
980 -> 1004
1005 [label="op2: -",color=green4, style=filled]
1004 -> 1005
1006 [label="label: ?ownPositionY",color=plum, style=filled]
1005 -> 1006
1007 [label="op2: *",color=green4, style=filled]
1006 -> 1007
1008 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
1007 -> 1008
1009 [label="const: 0.3048",color=red1, style=filled]
1007 -> 1009
1010 [label="label: ?intPositionY",color=plum, style=filled]
1005 -> 1010
1011 [label="op2: *",color=green4, style=filled]
1010 -> 1011
1012 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
1011 -> 1012
1013 [label="const: 0.3048",color=red1, style=filled]
1011 -> 1013
1014 [label="op2: -",color=green4, style=filled]
1004 -> 1014
1015 [label="label: ?ownVelocityY",color=plum, style=filled]
1014 -> 1015
1016 [label="op2: /",color=green4, style=filled]
1015 -> 1016
1017 [label="op2: *",color=green4, style=filled]
1016 -> 1017
1018 [label="ext_ownship_vy",color=cyan1, style=filled]
1017 -> 1018
1019 [label="const: 0.3048",color=red1, style=filled]
1017 -> 1019
1020 [label="const: 1.0",color=red1, style=filled]
1016 -> 1020
1021 [label="label: ?intVelocityY",color=plum, style=filled]
1014 -> 1021
1022 [label="op2: /",color=green4, style=filled]
1021 -> 1022
1023 [label="op2: *",color=green4, style=filled]
1022 -> 1023
1024 [label="ext_intruder_vy",color=cyan1, style=filled]
1023 -> 1024
1025 [label="const: 0.3048",color=red1, style=filled]
1023 -> 1025
1026 [label="const: 1.0",color=red1, style=filled]
1022 -> 1026
1027 [label="const: -1.0",color=red1, style=filled]
880 -> 1027
1028 [label="const: 30.0",color=red1, style=filled]
878 -> 1028
1029 [label="label: ?verticalWCV",color=plum, style=filled]
2 -> 1029
1030 [label="op2: ||",color=green4, style=filled]
1029 -> 1030
1031 [label="op2: <=",color=green4, style=filled]
1030 -> 1031
1032 [label="op1: abs",color=green4, style=filled]
1031 -> 1032
1033 [label="op2: -",color=green4, style=filled]
1032 -> 1033
1034 [label="label: ?ownPositionZ",color=plum, style=filled]
1033 -> 1034
1035 [label="op2: *",color=green4, style=filled]
1034 -> 1035
1036 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1035 -> 1036
1037 [label="const: 0.3048",color=red1, style=filled]
1035 -> 1037
1038 [label="label: ?intPositionZ",color=plum, style=filled]
1033 -> 1038
1039 [label="op2: *",color=green4, style=filled]
1038 -> 1039
1040 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1039 -> 1040
1041 [label="const: 0.3048",color=red1, style=filled]
1039 -> 1041
1042 [label="const: 144.78",color=red1, style=filled]
1031 -> 1042
1043 [label="op2: &&",color=green4, style=filled]
1030 -> 1043
1044 [label="op2: <=",color=green4, style=filled]
1043 -> 1044
1045 [label="const: 0.0",color=red1, style=filled]
1044 -> 1045
1046 [label="label: ?tcoa",color=plum, style=filled]
1044 -> 1046
1047 [label="op3: mux",color=green4, style=filled]
1046 -> 1047
1048 [label="op2: <",color=green4, style=filled]
1047 -> 1048
1049 [label="op2: *",color=green4, style=filled]
1048 -> 1049
1050 [label="op2: -",color=green4, style=filled]
1049 -> 1050
1051 [label="label: ?ownPositionZ",color=plum, style=filled]
1050 -> 1051
1052 [label="op2: *",color=green4, style=filled]
1051 -> 1052
1053 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1052 -> 1053
1054 [label="const: 0.3048",color=red1, style=filled]
1052 -> 1054
1055 [label="label: ?intPositionZ",color=plum, style=filled]
1050 -> 1055
1056 [label="op2: *",color=green4, style=filled]
1055 -> 1056
1057 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1056 -> 1057
1058 [label="const: 0.3048",color=red1, style=filled]
1056 -> 1058
1059 [label="op2: -",color=green4, style=filled]
1049 -> 1059
1060 [label="label: ?ownVelocityZ",color=plum, style=filled]
1059 -> 1060
1061 [label="op2: /",color=green4, style=filled]
1060 -> 1061
1062 [label="op2: *",color=green4, style=filled]
1061 -> 1062
1063 [label="ext_ownship_vz",color=cyan1, style=filled]
1062 -> 1063
1064 [label="const: 0.3048",color=red1, style=filled]
1062 -> 1064
1065 [label="const: 1.0",color=red1, style=filled]
1061 -> 1065
1066 [label="label: ?intVelocityZ",color=plum, style=filled]
1059 -> 1066
1067 [label="op2: /",color=green4, style=filled]
1066 -> 1067
1068 [label="op2: *",color=green4, style=filled]
1067 -> 1068
1069 [label="ext_intruder_vz",color=cyan1, style=filled]
1068 -> 1069
1070 [label="const: 0.3048",color=red1, style=filled]
1068 -> 1070
1071 [label="const: 1.0",color=red1, style=filled]
1067 -> 1071
1072 [label="const: 0.0",color=red1, style=filled]
1048 -> 1072
1073 [label="op2: /",color=green4, style=filled]
1047 -> 1073
1074 [label="op2: -",color=green4, style=filled]
1073 -> 1074
1075 [label="const: 0.0",color=red1, style=filled]
1074 -> 1075
1076 [label="op2: -",color=green4, style=filled]
1074 -> 1076
1077 [label="label: ?ownPositionZ",color=plum, style=filled]
1076 -> 1077
1078 [label="op2: *",color=green4, style=filled]
1077 -> 1078
1079 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1078 -> 1079
1080 [label="const: 0.3048",color=red1, style=filled]
1078 -> 1080
1081 [label="label: ?intPositionZ",color=plum, style=filled]
1076 -> 1081
1082 [label="op2: *",color=green4, style=filled]
1081 -> 1082
1083 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1082 -> 1083
1084 [label="const: 0.3048",color=red1, style=filled]
1082 -> 1084
1085 [label="op2: -",color=green4, style=filled]
1073 -> 1085
1086 [label="label: ?ownVelocityZ",color=plum, style=filled]
1085 -> 1086
1087 [label="op2: /",color=green4, style=filled]
1086 -> 1087
1088 [label="op2: *",color=green4, style=filled]
1087 -> 1088
1089 [label="ext_ownship_vz",color=cyan1, style=filled]
1088 -> 1089
1090 [label="const: 0.3048",color=red1, style=filled]
1088 -> 1090
1091 [label="const: 1.0",color=red1, style=filled]
1087 -> 1091
1092 [label="label: ?intVelocityZ",color=plum, style=filled]
1085 -> 1092
1093 [label="op2: /",color=green4, style=filled]
1092 -> 1093
1094 [label="op2: *",color=green4, style=filled]
1093 -> 1094
1095 [label="ext_intruder_vz",color=cyan1, style=filled]
1094 -> 1095
1096 [label="const: 0.3048",color=red1, style=filled]
1094 -> 1096
1097 [label="const: 1.0",color=red1, style=filled]
1093 -> 1097
1098 [label="const: -1.0",color=red1, style=filled]
1047 -> 1098
1099 [label="op2: <=",color=green4, style=filled]
1043 -> 1099
1100 [label="label: ?tcoa",color=plum, style=filled]
1099 -> 1100
1101 [label="op3: mux",color=green4, style=filled]
1100 -> 1101
1102 [label="op2: <",color=green4, style=filled]
1101 -> 1102
1103 [label="op2: *",color=green4, style=filled]
1102 -> 1103
1104 [label="op2: -",color=green4, style=filled]
1103 -> 1104
1105 [label="label: ?ownPositionZ",color=plum, style=filled]
1104 -> 1105
1106 [label="op2: *",color=green4, style=filled]
1105 -> 1106
1107 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1106 -> 1107
1108 [label="const: 0.3048",color=red1, style=filled]
1106 -> 1108
1109 [label="label: ?intPositionZ",color=plum, style=filled]
1104 -> 1109
1110 [label="op2: *",color=green4, style=filled]
1109 -> 1110
1111 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1110 -> 1111
1112 [label="const: 0.3048",color=red1, style=filled]
1110 -> 1112
1113 [label="op2: -",color=green4, style=filled]
1103 -> 1113
1114 [label="label: ?ownVelocityZ",color=plum, style=filled]
1113 -> 1114
1115 [label="op2: /",color=green4, style=filled]
1114 -> 1115
1116 [label="op2: *",color=green4, style=filled]
1115 -> 1116
1117 [label="ext_ownship_vz",color=cyan1, style=filled]
1116 -> 1117
1118 [label="const: 0.3048",color=red1, style=filled]
1116 -> 1118
1119 [label="const: 1.0",color=red1, style=filled]
1115 -> 1119
1120 [label="label: ?intVelocityZ",color=plum, style=filled]
1113 -> 1120
1121 [label="op2: /",color=green4, style=filled]
1120 -> 1121
1122 [label="op2: *",color=green4, style=filled]
1121 -> 1122
1123 [label="ext_intruder_vz",color=cyan1, style=filled]
1122 -> 1123
1124 [label="const: 0.3048",color=red1, style=filled]
1122 -> 1124
1125 [label="const: 1.0",color=red1, style=filled]
1121 -> 1125
1126 [label="const: 0.0",color=red1, style=filled]
1102 -> 1126
1127 [label="op2: /",color=green4, style=filled]
1101 -> 1127
1128 [label="op2: -",color=green4, style=filled]
1127 -> 1128
1129 [label="const: 0.0",color=red1, style=filled]
1128 -> 1129
1130 [label="op2: -",color=green4, style=filled]
1128 -> 1130
1131 [label="label: ?ownPositionZ",color=plum, style=filled]
1130 -> 1131
1132 [label="op2: *",color=green4, style=filled]
1131 -> 1132
1133 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1132 -> 1133
1134 [label="const: 0.3048",color=red1, style=filled]
1132 -> 1134
1135 [label="label: ?intPositionZ",color=plum, style=filled]
1130 -> 1135
1136 [label="op2: *",color=green4, style=filled]
1135 -> 1136
1137 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1136 -> 1137
1138 [label="const: 0.3048",color=red1, style=filled]
1136 -> 1138
1139 [label="op2: -",color=green4, style=filled]
1127 -> 1139
1140 [label="label: ?ownVelocityZ",color=plum, style=filled]
1139 -> 1140
1141 [label="op2: /",color=green4, style=filled]
1140 -> 1141
1142 [label="op2: *",color=green4, style=filled]
1141 -> 1142
1143 [label="ext_ownship_vz",color=cyan1, style=filled]
1142 -> 1143
1144 [label="const: 0.3048",color=red1, style=filled]
1142 -> 1144
1145 [label="const: 1.0",color=red1, style=filled]
1141 -> 1145
1146 [label="label: ?intVelocityZ",color=plum, style=filled]
1139 -> 1146
1147 [label="op2: /",color=green4, style=filled]
1146 -> 1147
1148 [label="op2: *",color=green4, style=filled]
1147 -> 1148
1149 [label="ext_intruder_vz",color=cyan1, style=filled]
1148 -> 1149
1150 [label="const: 0.3048",color=red1, style=filled]
1148 -> 1150
1151 [label="const: 1.0",color=red1, style=filled]
1147 -> 1151
1152 [label="const: -1.0",color=red1, style=filled]
1101 -> 1152
1153 [label="const: 30.0",color=red1, style=filled]
1099 -> 1153


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((ext_sqrt_4)) <= ((1852.0)))) || ((((((ext_sqrt_5)) <= ((1852.0)))) && (((((0.0) <= ((( (((((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))) < (0.0))) ? ((((((((1852.0)) * ((1852.0)))) - ((((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))))))))))) / (((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))))) : (-1.0)))))) && ((((( (((((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))) < (0.0))) ? ((((((((1852.0)) * ((1852.0)))) - ((((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))))))))))) / (((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))))) : (-1.0)))) <= (30.0)))))))))) && (((((((((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) > 0)? ((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) : -((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048))))))) <= (144.78))) || (((((0.0) <= ((( ((((((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) < (0.0))) ? (((((0.0) - ((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))))) / ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) : (-1.0)))))) && ((((( ((((((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) < (0.0))) ? (((((0.0) - ((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))))) / ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) : (-1.0)))) <= (30.0)))))))))));
*/
SBool trigger_guard_alert_WCVtaumod(const SDouble ext_sqrt_4,
                                    const SDouble ext_ownship_x_position_ft,
                                    const SDouble ext_intruder_x_position_ft,
                                    const SDouble ext_intruder_y_position_ft,
                                    const SDouble ext_sqrt_5, const SDouble ext_ownship_vx,
                                    const SDouble ext_intruder_vx, const SDouble ext_ownship_vy,
                                    const SDouble ext_intruder_vy,
                                    const SDouble ext_ownship_z_position_ft,
                                    const SDouble ext_intruder_z_position_ft,
                                    const SDouble ext_ownship_vz, const SDouble ext_intruder_vz)
{
  const SDouble s0 = ext_sqrt_4;
  const SDouble s1 = ext_ownship_x_position_ft;
  const SDouble s2 = ext_intruder_x_position_ft;
  const SDouble s3 = ext_intruder_y_position_ft;
  const SDouble s4 = ext_sqrt_5;
  const SDouble s5 = ext_ownship_vx;
  const SDouble s6 = ext_intruder_vx;
  const SDouble s7 = ext_ownship_vy;
  const SDouble s8 = ext_intruder_vy;
  const SDouble s9 = ext_ownship_z_position_ft;
  const SDouble s10 = ext_intruder_z_position_ft;
  const SDouble s11 = ext_ownship_vz;
  const SDouble s12 = ext_intruder_vz;
  const SDouble s13 = s0 /* ?norm2dim */;
  const SBool   s15 = s13 <= 1852.0;
  const SDouble s16 = s4 /* ?norm2dim */;
  const SBool   s17 = s16 <= 1852.0;
  const SDouble s20 = s1 * 0.3048;
  const SDouble s21 = s20 /* ?ownPositionX */;
  const SDouble s22 = s2 * 0.3048;
  const SDouble s23 = s22 /* ?intPositionX */;
  const SDouble s24 = s21 - s23;
  const SDouble s25 = s5 * 0.3048;
  const SDouble s27 = s25 / 1.0;
  const SDouble s28 = s27 /* ?ownVelocityX */;
  const SDouble s29 = s6 * 0.3048;
  const SDouble s30 = s29 / 1.0;
  const SDouble s31 = s30 /* ?intVelocityX */;
  const SDouble s32 = s28 - s31;
  const SDouble s33 = s24 * s32;
  const SDouble s34 = s20 /* ?ownPositionY */;
  const SDouble s35 = s3 * 0.3048;
  const SDouble s36 = s35 /* ?intPositionY */;
  const SDouble s37 = s34 - s36;
  const SDouble s38 = s7 * 0.3048;
  const SDouble s39 = s38 / 1.0;
  const SDouble s40 = s39 /* ?ownVelocityY */;
  const SDouble s41 = s8 * 0.3048;
  const SDouble s42 = s41 / 1.0;
  const SDouble s43 = s42 /* ?intVelocityY */;
  const SDouble s44 = s40 - s43;
  const SDouble s45 = s37 * s44;
  const SDouble s46 = s33 + s45;
  const SDouble s47 = s46 /* ?scalar2dim */;
  const SBool   s48 = s47 < 0.0;
  const SDouble s50 = s24 * s24;
  const SDouble s51 = s37 * s37;
  const SDouble s52 = s50 + s51;
  const SDouble s53 = s52 /* ?scalar2dim */;
  const SDouble s54 = s53 /* ?normsq2dim */;
  const SDouble s55 = 3429904.0 - s54;
  const SDouble s56 = s55 / s47;
  const SDouble s58 = s48 ? s56 : -1.0;
  const SDouble s59 = s58 /* ?taumod */;
  const SBool   s60 = 0.0 <= s59;
  const SBool   s62 = s59 <= 30.0;
  const SBool   s63 = s60 && s62;
  const SBool   s64 = s17 && s63;
  const SBool   s65 = s15 || s64;
  const SBool   s66 = s65 /* ?horizontalWCV */;
  const SDouble s67 = s9 * 0.3048;
  const SDouble s68 = s67 /* ?ownPositionZ */;
  const SDouble s69 = s10 * 0.3048;
  const SDouble s70 = s69 /* ?intPositionZ */;
  const SDouble s71 = s68 - s70;
  const SDouble s72 = fabs(s71);
  const SBool   s74 = s72 <= 144.78;
  const SDouble s75 = s11 * 0.3048;
  const SDouble s76 = s75 / 1.0;
  const SDouble s77 = s76 /* ?ownVelocityZ */;
  const SDouble s78 = s12 * 0.3048;
  const SDouble s79 = s78 / 1.0;
  const SDouble s80 = s79 /* ?intVelocityZ */;
  const SDouble s81 = s77 - s80;
  const SDouble s82 = s71 * s81;
  const SBool   s83 = s82 < 0.0;
  const SDouble s84 = 0.0 - s71;
  const SDouble s85 = s84 / s81;
  const SDouble s86 = s83 ? s85 : -1.0;
  const SDouble s87 = s86 /* ?tcoa */;
  const SBool   s88 = 0.0 <= s87;
  const SBool   s89 = s87 <= 30.0;
  const SBool   s90 = s88 && s89;
  const SBool   s91 = s74 || s90;
  const SBool   s92 = s91 /* ?verticalWCV */;
  const SBool   s93 = s66 && s92;
  const SBool   s94 = s93 /* ?wellClearViolation */;

  return s94;
}

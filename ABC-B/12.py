[print(str(t // 3600).zfill(2) + ':' + str((t % 3600) // 60).zfill(2) + ':' + str(t % 60).zfill(2)) for t in [int(input())]]

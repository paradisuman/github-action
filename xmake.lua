
set_project("action")
set_languages("c++17")

set_allowedplats("macosx", "linux")

tbox_configs = {hash=true, ["force-utf8"]=true, charset=true}
add_requires("tbox dev", {system=false, configs=tbox_configs})

target("test") do
    set_kind("binary")
    add_packages("tbox")
    add_files("src/*.cpp")
end
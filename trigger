create trigger model_price_trigger
on Distributor
after update
old row as old
as begin
set nocount on;
if update (price)
begin
